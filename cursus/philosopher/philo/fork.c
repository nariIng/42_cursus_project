/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 06:37:00 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/05 08:01:03 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_fork_free(t_philo *philo, int a)
{
	if (a == 0)
	{
		pthread_mutex_lock(philo->r_fork);
		if (*(philo->r_state_fork) == 0)
		{
			pthread_mutex_unlock(philo->r_fork);
			return (1);
		}
		pthread_mutex_unlock(philo->r_fork);
		return (0);
	}
	pthread_mutex_lock(philo->l_fork);
	if (*(philo->l_state_fork) == 0)
	{
		pthread_mutex_unlock(philo->l_fork);
		return (1);
	}
	pthread_mutex_unlock(philo->l_fork);
	return (0);
}

void	ft_take_right_fork(t_philo *philo)
{
	while (!ft_fork_free(philo, RIGHT))
		usleep(1);
	if (ft_fork_free(philo, RIGHT))
	{
		pthread_mutex_lock(philo->r_fork);
		*(philo->r_state_fork) = 1;
		pthread_mutex_unlock(philo->r_fork);
		if (ft_no_dead(philo->process))
		{
			pthread_mutex_lock(&philo->process->print);
			printf("%d %d has taken a fork\n",
				ft_get_current_time(philo->process), philo->id);
			pthread_mutex_unlock(&philo->process->print);
		}
	}
}

void	ft_take_left_fork(t_philo *philo)
{
	while (!ft_fork_free(philo, LEFT))
		usleep(1);
	if (ft_fork_free(philo, LEFT))
	{
		pthread_mutex_lock(philo->l_fork);
		*(philo->l_state_fork) = 1;
		pthread_mutex_unlock(philo->l_fork);
		if (ft_no_dead(philo->process))
		{
			pthread_mutex_lock(&philo->process->print);
			printf("%d %d has taken a fork\n",
				ft_get_current_time(philo->process), philo->id);
			pthread_mutex_unlock(&philo->process->print);
		}
	}
}

void	ft_take_fork(t_philo *philo)
{
	if (philo->id % 2 == 0)
	{
		ft_take_right_fork(philo);
		ft_take_left_fork(philo);
	}
	else
	{
		usleep(10);
		ft_take_left_fork(philo);
		if (philo->process->number_philo == 1)
			return ;
		usleep(10);
		ft_take_right_fork(philo);
	}
}

void	ft_put_fork(t_philo *philo)
{
	if (philo->id % 2 == 0)
	{
		pthread_mutex_lock(philo->l_fork);
		*(philo->l_state_fork) = 0;
		pthread_mutex_unlock(philo->l_fork);
		pthread_mutex_lock(philo->r_fork);
		*(philo->r_state_fork) = 0;
		pthread_mutex_unlock(philo->r_fork);
	}
	else
	{
		pthread_mutex_lock(philo->r_fork);
		*(philo->r_state_fork) = 0;
		pthread_mutex_unlock(philo->r_fork);
		pthread_mutex_lock(philo->l_fork);
		*(philo->l_state_fork) = 0;
		pthread_mutex_unlock(philo->l_fork);
	}
}
