/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:37:10 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/04 10:48:10 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

long	ft_atol(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = result * 10 + nptr[i++] - '0';
	while (nptr[i])
	{
		if (((nptr[i] < 9 || nptr[i] > 13) && nptr[i] != 32))
			return (-1);
		i++;
	}
	return (result * sign);
}

void	ft_join_thread(t_process *process)
{
	int	i;

	i = 0;
	while (i < process->number_philo)
	{
		pthread_join(process->philo[i].thread, NULL);
		i++;
	}
	pthread_join(process->monitor, NULL);
}

void	ft_start(t_process *process)
{
	int	i;

	i = 0;
	while (i < process->number_philo)
	{
		pthread_create(&process->philo[i].thread,
			NULL, ft_action, &(process->philo[i]));
		i++;
	}
	pthread_create(&process->monitor, NULL, ft_monitoring, process);
	ft_join_thread(process);
}
