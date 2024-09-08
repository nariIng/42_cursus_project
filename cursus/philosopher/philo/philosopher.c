/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 08:32:44 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/05 06:50:25 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_no_number(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isnum(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_process	process;

	if (ft_check_error(argc, argv))
	{
		ft_exit_error();
		return (1);
	}
	process.is_n_eat = 0;
	if (argc == 6)
	{
		process.is_n_eat = 1;
		if (ft_atol(argv[5]) == 0)
			return (0);
	}
	ft_init(&process, argv);
	ft_start(&process);
	ft_finish(&process);
	return (0);
}
