/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:04:36 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/05 08:25:42 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	ft_think(t_philo *philo)
{
	if (ft_no_dead(philo->process))
	{
		pthread_mutex_lock(&philo->process->print);
		printf("%d %d is thinking\n",
			ft_get_current_time(philo->process), philo->id);
		pthread_mutex_unlock(&philo->process->print);
	}
}

void	ft_sleep(t_philo *philo)
{
	if (ft_no_dead(philo->process))
	{
		pthread_mutex_lock(&philo->process->print);
		printf("%d %d is sleeping\n",
			ft_get_current_time(philo->process), philo->id);
		pthread_mutex_unlock(&philo->process->print);
	}
	ft_msleep(philo->process, philo->process->time_to_sleep);
}

void	ft_eating(t_philo *philo)
{
	if (ft_no_dead(philo->process))
	{
		pthread_mutex_lock(&philo->process->print);
		printf("%d %d is eating\n",
			ft_get_current_time(philo->process), philo->id);
		pthread_mutex_unlock(&philo->process->print);
	}
	pthread_mutex_lock(philo->eating);
	philo->is_eating = 1;
	pthread_mutex_unlock(philo->eating);
	ft_msleep(philo->process, philo->process->time_to_eat);
	if (philo->process->is_n_eat)
	{
		pthread_mutex_lock(philo->times_eaten);
		philo->n_eat--;
		pthread_mutex_unlock(philo->times_eaten);
	}
	pthread_mutex_lock(philo->eating);
	philo->is_eating = 0;
	pthread_mutex_unlock(philo->eating);
}

void	ft_eat(t_philo *philo)
{
	ft_take_fork(philo);
	if (philo->process->number_philo == 1)
		return ;
	pthread_mutex_lock(philo->eating);
	philo->last_meal = ft_get_current_time(philo->process);
	pthread_mutex_unlock(philo->eating);
	ft_eating(philo);
	ft_put_fork(philo);
}

void	*ft_action(void *argv)
{
	t_philo	*philo;

	philo = (t_philo *) argv;
	while (!ft_is_time(philo->process))
		usleep(10);
	while (ft_no_dead(philo->process))
	{
		ft_eat(philo);
		if (ft_stop(philo))
			return (argv);
		if (philo->process->number_philo == 1)
			return (argv);
		ft_sleep(philo);
		ft_think(philo);
		usleep (10);
	}
	return (argv);
}
