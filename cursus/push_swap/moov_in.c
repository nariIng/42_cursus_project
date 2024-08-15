/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moov_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:59:55 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 09:55:46 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_moov_in_a(t_c_list **a, long small_coast)
{
	int		pos;
	int		length;

	pos = ft_find_position(*a, small_coast);
	length = ft_count_liste(a);
	if (pos <= length / 2)
	{
		while (*((*a)->content) != small_coast
			&& !ft_is_short(a))
			ft_ra(a);
		return (0);
	}
	while (*((*a)->content) != small_coast
		&& !ft_is_short(a))
		ft_rra(a);
	return (0);
}

int	ft_moov_in_b(t_c_list **a, t_c_list **b, long small_coast)
{
	long	smallest;
	int		pos;
	int		length;

	if (ft_smallest(b, small_coast) || ft_biggest(b, small_coast))
	{
		ft_small_big_moov(a, b);
		return (0);
	}
	smallest = ft_find_small(b, small_coast);
	pos = ft_find_position(*b, smallest);
	length = ft_count_liste(b);
	if (pos <= length / 2)
	{
		while (*((*b)->content) != smallest)
			ft_rb(b);
		ft_pb(a, b);
		return (0);
	}
	while (*((*b)->content) != smallest)
		ft_rrb(b);
	ft_pb(a, b);
	return (0);
}

int	ft_small_big_moov(t_c_list **a, t_c_list **b)
{
	int		pos;
	int		length;

	pos = ft_find_position(*b, ft_find_max(*b));
	length = ft_count_liste(b);
	if (pos <= length / 2)
	{
		while (*((*b)->content) != ft_find_max(*b))
			ft_rb(b);
		ft_pb(a, b);
		return (0);
	}
	while (*((*b)->content) != ft_find_max(*b))
		ft_rrb(b);
	ft_pb(a, b);
	return (0);
}

int	ft_second_moov(t_c_list **a, t_c_list **b)
{
	if (*((*b)->content) < *((*b)->next->content)
		&& *((*a)->content) > *((*a)->next->content)
		&& *((*a)->next->content) > *((*b)->next->content))
		ft_rr(a, b);
	else if (*((*b)->content) < *((*b)->next->content))
		ft_rb(b);
	return (0);
}
