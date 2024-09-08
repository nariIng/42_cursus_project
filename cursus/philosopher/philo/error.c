/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:58:08 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/05 06:41:36 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_check_time(char *time)
{
	long	i;

	i = 0;
	if (time[0] == '\0')
		return (1);
	while (time[i])
	{
		if (!ft_isnum(time[i])
			&& !ft_issigne(time[i])
			&& !ft_isspace(time[i]))
			return (1);
		i++;
	}
	i = ft_atol(time);
	if (i < 0 || i > 2147483647)
		return (1);
	return (0);
}

int	ft_check_error(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_no_number(argv[i++]))
			return (1);
	}
	i = 1;
	if (argc != 5 && argc != 6)
		return (1);
	if (ft_atol(argv[1]) == 0)
		return (1);
	while (i < 5)
	{
		if (ft_check_time(argv[i]))
			return (1);
		i++;
	}
	if (argc == 6)
	{
		if (ft_check_time(argv[5]))
			return (1);
	}
	return (0);
}
