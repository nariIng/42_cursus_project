/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:34:28 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 09:50:02 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	exit(1);
}

void	ft_exit_error(char **tab)
{
	write(2, "Error\n", 6);
	ft_free(tab);
	exit(1);
}

void	ft_exit_i(long *tab_i)
{
	write(2, "Error\n", 6);
	free(tab_i);
	exit(1);
}

void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

void	ft_exit(t_c_list *a, t_c_list *b, long *tab_i)
{
	ft_lstfree(&a);
	ft_lstfree(&b);
	free (tab_i);
	exit (0);
}
