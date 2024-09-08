/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitor.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 06:50:29 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/05 08:17:03 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_philo_dead(t_philo *philo)
{
	pthread_mutex_lock(philo->eating);
	if (ft_get_current_time(philo->process) - philo->last_meal
		> philo->process->time_to_die)
	{
		pthread_mutex_unlock(philo->eating);
		if (ft_no_dead(philo->process))
		{
			if (philo->process->is_n_eat)
			{
				if (ft_all_have_eaten(philo->process))
					return (1);
			}
			pthread_mutex_lock(&philo->process->print);
			printf("%d %d dead\n",
				ft_get_current_time(philo->process), philo->id);
			pthread_mutex_unlock(&philo->process->print);
		}
		pthread_mutex_lock(&philo->process->dead);
		philo->process->is_dead = 1;
		pthread_mutex_unlock(&philo->process->dead);
		return (1);
	}
	pthread_mutex_unlock(philo->eating);
	return (0);
}

void	ft_is_dead(t_process *process)
{
	int		i;

	i = 0;
	while (i < process->number_philo)
	{
		if (ft_philo_dead(&(process->philo[i])))
			return ;
		i++;
	}
}

int	ft_all_have_eaten(t_process *process)
{
	int	i;

	i = 0;
	while (i < process->number_philo)
	{
		pthread_mutex_lock(process->philo[i].done);
		if (process->philo[i].have_eaten == 0)
		{
			pthread_mutex_unlock(process->philo[i].done);
			return (0);
		}
		pthread_mutex_unlock(process->philo[i].done);
		i++;
	}
	pthread_mutex_lock(&process->dead);
	process->is_dead = 1;
	pthread_mutex_unlock(&process->dead);
	return (1);
}

void	*ft_monitoring(void *argv)
{
	t_process	*process;

	process = (t_process *)argv;
	while (!ft_is_time(process))
		usleep(10);
	while (1)
	{
		if (process->is_n_eat)
		{
			if (ft_all_have_eaten(process))
				return (argv);
		}
		usleep(10);
		ft_is_dead(process);
		if (!ft_no_dead(process))
			return (argv);
	}
	return (argv);
}
