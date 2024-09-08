/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:42:54 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/03 17:35:12 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_no_dead(t_process *process)
{
	pthread_mutex_lock(&process->dead);
	if (process->is_dead == 1)
	{
		pthread_mutex_unlock(&process->dead);
		return (0);
	}
	pthread_mutex_unlock(&process->dead);
	return (1);
}
