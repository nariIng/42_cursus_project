/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:58:47 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/05 07:59:32 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	ft_exit_error(void)
{
	printf("error of arguments\n");
	return ;
}

int	ft_stop(t_philo *philo)
{
	if (philo->process->is_n_eat)
	{
		pthread_mutex_lock(philo->times_eaten);
		if (philo->n_eat == 0)
		{
			usleep (10);
			pthread_mutex_unlock(philo->times_eaten);
			pthread_mutex_lock(philo->done);
			philo->have_eaten = 1;
			pthread_mutex_unlock(philo->done);
			return (1);
		}
		pthread_mutex_unlock(philo->times_eaten);
	}
	return (0);
}

void	ft_finish(t_process *process)
{
	int		i;

	i = 0;
	while (i < process->number_philo)
	{
		pthread_mutex_destroy((process->philo)[i].l_fork);
		pthread_mutex_destroy((process->philo)[i].times_eaten);
		pthread_mutex_destroy((process->philo)[i].eating);
		pthread_mutex_destroy((process->philo)[i].done);
		free(process->philo[i].l_state_fork);
		free(process->philo[i].l_fork);
		free(process->philo[i].times_eaten);
		free(process->philo[i].eating);
		free(process->philo[i].done);
		i++;
	}
	pthread_mutex_destroy(&process->print);
	pthread_mutex_destroy(&process->dead);
	pthread_mutex_destroy(&process->current_time);
	free(process->philo);
}
