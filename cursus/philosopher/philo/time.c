/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:16:30 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/05 06:51:17 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

long	ft_get_time(t_process *process)
{
	struct timeval	current_time;
	long			time;

	(void) process;
	gettimeofday(&current_time, NULL);
	time = (current_time.tv_sec * 1000) + (current_time.tv_usec / 1000);
	return (time);
}

int	ft_is_time(t_process *process)
{
	if (ft_get_time(process) < process->init_time)
		return (0);
	return (1);
}

int	ft_get_current_time(t_process *process)
{
	int		current_time;

	pthread_mutex_lock(&process->current_time);
	current_time = ft_get_time(process) - process->init_time;
	pthread_mutex_unlock(&process->current_time);
	return (current_time);
}

void	ft_msleep(t_process *process, int ms)
{
	long	time;

	time = ft_get_time(process);
	while (ft_get_time(process) - time < ms)
		usleep(1);
}
