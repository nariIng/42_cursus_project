/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shorting_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:32:12 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 10:21:56 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_big_short(t_c_list **a, t_c_list **b)
{
	long	small_coast;

	small_coast = ft_find_small_coast(a, b);
	if (ft_smallest(b, *(*a)->content) || ft_biggest(b, *(*a)->content))
		small_coast = *(*a)->content;
	ft_same_moov(a, b, small_coast);
	ft_moov_in_a(a, small_coast);
	ft_moov_in_b(a, b, small_coast);
	return (0);
}

int	ft_same_moov(t_c_list **a, t_c_list **b, long val)
{
	int		length_a;
	int		length_b;
	int		pos_a;
	int		pos_b;

	length_a = ft_count_liste(a);
	length_b = ft_count_liste(b);
	pos_a = ft_find_position(*a, val);
	pos_b = ft_find_position(*b, ft_find_small(b, val));
	if (pos_a <= length_a / 2 && pos_b <= length_b / 2)
	{
		while (!(*(*a)->content == val
				|| *(*b)->content == ft_find_small(b, val)))
			ft_rr(a, b);
	}
	else if (pos_a > length_a / 2 && pos_b > length_b / 2)
	{
		while (!(*(*a)->content == val
				|| *(*b)->content == ft_find_small(b, val)))
			ft_rrr(a, b);
	}
	return (0);
}

int	ft_three_short(t_c_list **list)
{
	t_c_list	*temp;
	long		max;
	long		min;

	temp = *list;
	max = ft_find_max(*list);
	min = ft_find_min(*list);
	if (ft_is_short(list))
		return (0);
	if (ft_find_position(temp, max) == 0)
	{
		if (ft_find_position(temp, min) == 2)
			return (ft_ra(list), ft_sa(list), 0);
		return (ft_ra(list), 0);
	}
	else if (ft_find_position(temp, max) == 1)
	{
		if (ft_find_position(temp, min) == 0)
			return (ft_sa(list), ft_ra(list), 0);
		return (ft_rra(list), 0);
	}
	return (ft_sa(list), 0);
}

int	ft_first_moov(t_c_list **a, t_c_list **b)
{
	ft_pb(a, b);
	ft_pb(a, b);
	return (0);
}
