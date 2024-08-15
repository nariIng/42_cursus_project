/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moovs_ext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:59:00 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 10:00:34 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rb(t_c_list **b)
{
	if (*b)
	{
		*b = (*b)->next;
		ft_printf("rb\n");
		return (0);
	}
	return (1);
}

int	ft_rr(t_c_list **a, t_c_list **b)
{
	if (*a || *b)
	{
		if (*a)
			*a = (*a)->next;
		if (*b)
			*b = (*b)->next;
		ft_printf("rr\n");
		return (0);
	}
	return (1);
}

void	ft_pb_ext(t_c_list **a, t_c_list **b)
{
	t_c_list	*temp;
	t_c_list	*tmp;

	temp = *a;
	tmp = (*a)->next;
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	temp->next = temp;
	temp->prev = temp;
	*a = tmp;
	ft_add_back_list(b, temp);
	*b = (*b)->prev;
}

int	ft_pb(t_c_list **a, t_c_list **b)
{
	if (*a)
	{
		if (ft_count_liste(a) == 1)
		{
			ft_pb_ext(a, b);
			ft_printf("pb\n");
			*a = NULL;
			return (0);
		}
		ft_pb_ext(a, b);
		ft_printf("pb\n");
		return (0);
	}
	return (1);
}

int	ft_pa(t_c_list **a, t_c_list **b)
{
	if (*b)
	{
		if (ft_count_liste(b) == 1)
		{
			ft_pb_ext(b, a);
			ft_printf("pa\n");
			*b = NULL;
			return (0);
		}
		ft_pb_ext(b, a);
		ft_printf("pa\n");
		return (0);
	}
	return (1);
}
