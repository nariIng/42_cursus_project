/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:39:37 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 09:31:43 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_short(t_c_list **list)
{
	t_c_list	*temp;
	t_c_list	*tmp;

	temp = (*list)->next;
	if (*(temp->content) < *((*list)->content))
		return (0);
	tmp = temp->next;
	while (*(tmp->content) != *((*list)->content))
	{
		if (*(tmp->content) < *(temp->content))
			return (0);
		temp = temp->next;
		tmp = temp->next;
	}
	return (1);
}

int	ft_is_reverse_short(t_c_list *list)
{
	t_c_list	*temp;
	t_c_list	*tmp;

	temp = list->next;
	if (*(temp->content) > *(list->content))
		return (0);
	tmp = temp->next;
	while (*(tmp->content) != *(list->content))
	{
		tmp = temp->next;
		if (*(tmp->content) > *(temp->content))
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_not_number(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (j == 0)
			{
				if ((tab[i][j] != '-' && tab[i][j] != '+'
					&& !(ft_isdigit(tab[i][j]))))
					return (1);
			}
			else
			{
				if (!ft_isdigit(tab[i][j]))
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_not_integer(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (ft_atol(tab[i]) < -2147483648
			|| 2147483647 < ft_atol(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_all_signe(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (ft_strlen(tab[i]) == 1
			&& (tab[i][0] == '+'
			|| tab[i][0] == '-'))
			return (1);
		i++;
	}
	return (0);
}
