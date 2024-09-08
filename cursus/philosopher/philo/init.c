/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:00:02 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/08 07:01:29 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	ft_init_params(t_process *process, char **argv)
{
	int		i;

	i = 0;
	while (i < process->number_philo)
	{
		process->philo[i].process = process;
		process->philo[i].id = i + 1;
		process->philo[i].is_eating = 0;
		process->philo[i].have_eaten = 0;
		process->philo[i].last_meal = 0;
		if (process->is_n_eat)
			process->philo[i].n_eat = (int)ft_atol(argv[5]);
		i++;
	}
	process->is_dead = 0;
	process->time_to_die = (int)ft_atol(argv[2]);
	process->time_to_eat = (int)ft_atol(argv[3]);
	process->time_to_sleep = (int)ft_atol(argv[4]);
}

void	ft_init_time(t_process *process)
{
	long	time_start;

	time_start = ft_get_time(process) + (20 * process->number_philo);
	process->init_time = time_start;
}

void	ft_init_malloc(t_process *process)
{
	int	i;

	i = 0;
	while (i < process->number_philo)
	{
		process->philo[i].l_fork = (pthread_mutex_t *)
			malloc(sizeof(pthread_mutex_t) * 1);
		process->philo[i].times_eaten = (pthread_mutex_t *)
			malloc(sizeof(pthread_mutex_t) * 1);
		process->philo[i].eating = (pthread_mutex_t *)
			malloc(sizeof(pthread_mutex_t) * 1);
		process->philo[i].done = (pthread_mutex_t *)
			malloc(sizeof(pthread_mutex_t) * 1);
		process->philo[i].l_state_fork = (int *)
			malloc (sizeof(int) * 1);
		*(process->philo[i].l_state_fork) = 0;
		i++;
	}
}

void	ft_init_mutex(t_process *process)
{
	int		i;

	i = 0;
	ft_init_malloc(process);
	while (i < process->number_philo - 1)
	{
		pthread_mutex_init(process->philo[i].l_fork, NULL);
		pthread_mutex_init(process->philo[i].times_eaten, NULL);
		pthread_mutex_init(process->philo[i].eating, NULL);
		pthread_mutex_init(process->philo[i].done, NULL);
		process->philo[i + 1].r_fork = process->philo[i].l_fork;
		process->philo[i + 1].r_state_fork = process->philo[i].l_state_fork;
		i++;
	}
	pthread_mutex_init(process->philo[i].l_fork, NULL);
	pthread_mutex_init(process->philo[i].times_eaten, NULL);
	pthread_mutex_init(process->philo[i].eating, NULL);
	pthread_mutex_init(process->philo[i].done, NULL);
	process->philo[0].r_fork = process->philo[i].l_fork;
	process->philo[0].r_state_fork = process->philo[i].l_state_fork;
	pthread_mutex_init(&(process->print), NULL);
	pthread_mutex_init(&(process->dead), NULL);
	pthread_mutex_init(&(process->current_time), NULL);
}

void	ft_init(t_process	*process, char **argv)
{
	t_philo		*philo;

	process->number_philo = (int)atol(argv[1]);
	philo = (t_philo *)malloc (sizeof(t_philo) * (process->number_philo));
	if (!philo)
		return ;
	process->philo = philo;
	ft_init_params(process, argv);
	ft_init_time(process);
	ft_init_mutex(process);
}
