/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moovs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:06:54 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 09:59:44 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa_sb(t_c_list **list)
{
	t_c_list	*temp;
	t_c_list	*tmp;

	temp = *list;
	tmp = (*list)->next;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	temp->prev->next = tmp;
	tmp->next = temp;
	tmp->prev = temp->prev;
	temp->prev = tmp;
	*list = tmp;
}

int	ft_sa(t_c_list **a)
{
	if (ft_count_liste(a) > 1)
	{
		ft_sa_sb(a);
		ft_printf("sa\n");
		return (0);
	}
	return (1);
}

int	ft_sb(t_c_list **b)
{
	if (ft_count_liste(b) > 1)
	{
		ft_sa_sb(b);
		ft_printf("sb\n");
		return (0);
	}
	return (1);
}

int	ft_ss(t_c_list **a, t_c_list **b)
{
	if (*a || *b)
	{
		if (ft_count_liste(a) > 1 || ft_count_liste(b) > 1)
			ft_printf("ss\n");
		if (ft_count_liste(a) > 1)
			ft_sa_sb(a);
		if (ft_count_liste(b) > 1)
			ft_sa_sb(b);
		return (0);
	}
	return (1);
}

int	ft_ra(t_c_list **a)
{
	if (*a)
	{
		*a = (*a)->next;
		ft_printf("ra\n");
		return (0);
	}
	return (1);
}
