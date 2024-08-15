/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:28:29 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 11:13:36 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_repeat(long *tab_i, char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (tab_i[i] == tab_i[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

long	*ft_make_integer(char **tab)
{
	long	*tab_i;
	int		i;

	i = 0;
	while (tab[i])
		i++;
	tab_i = (long *)ft_calloc(sizeof (long), i + 1);
	if (!tab_i)
		return (free(tab), NULL);
	i = 0;
	while (tab[i])
	{
		tab_i[i] = ft_atol(tab[i]);
		i++;
	}
	if (ft_repeat(tab_i, tab))
	{
		ft_free(tab);
		ft_exit_i(tab_i);
	}
	return (tab_i);
}

char	**ft_check_error(int argc, char **argv)
{
	char		**tab;

	if (argc < 2)
		ft_error();
	tab = ft_arrange_to_tab(argv);
	if (!tab)
		return (NULL);
	if (ft_empty(argv))
		ft_exit_error(tab);
	if (ft_not_number(tab))
		ft_exit_error(tab);
	if (ft_is_all_signe(tab))
		ft_exit_error(tab);
	if (ft_not_integer(tab))
		ft_exit_error(tab);
	return (tab);
}

int	ft_empty(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (ft_strlen(tab[i]) == 0
			|| ft_all_space(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

t_c_list	*ft_convert_list(long *tab_i, char **tab)
{
	t_c_list	*list;
	int			i;

	i = 0;
	list = NULL;
	while (tab[i])
	{
		ft_add_back_list(&list, ft_newlist(&tab_i[i]));
		free (tab[i]);
		i++;
	}
	free (tab);
	return (list);
}
