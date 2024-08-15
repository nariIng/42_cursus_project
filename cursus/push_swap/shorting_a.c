/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shorting_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:10:14 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 10:17:47 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_big_short_reverse(t_c_list **a, t_c_list **b)
{
	long	small_coast;

	small_coast = *(*b)->content;
	if (ft_biggest(a, *(*b)->content) || ft_smallest(a, small_coast))
		small_coast = *(*b)->content;
	if (*(*a)->content != ft_find_big(a, small_coast)
		&& *(*b)->content != small_coast)
		ft_same_moov_reverse(a, b, small_coast);
	ft_moov_in_b_reverse(b, small_coast);
	ft_moov_in_a_reverse(a, b, small_coast);
	return (0);
}

int	ft_same_moov_reverse(t_c_list **a, t_c_list **b, long val)
{
	int		length_a;
	int		length_b;
	int		pos_a;
	int		pos_b;

	length_a = ft_count_liste(a);
	length_b = ft_count_liste(b);
	pos_a = ft_find_position(*a, ft_find_big(a, val));
	pos_b = ft_find_position(*b, val);
	if (pos_a <= length_a / 2 && pos_b <= length_b / 2)
	{
		while (*(*b)->content != val
			&& *(*a)->content != ft_find_big(a, val))
			ft_rr(a, b);
	}
	else if (pos_a > length_a / 2 && pos_b > length_b / 2)
	{
		while (*(*b)->content != val
			&& *(*a)->content != ft_find_big(a, val))
			ft_rrr(a, b);
	}
	return (0);
}

int	ft_moov_in_b_reverse(t_c_list **b, long small_coast)
{
	int		pos;
	int		length;

	pos = ft_find_position(*b, small_coast);
	length = ft_count_liste(b);
	if (pos <= length / 2)
	{
		while (*((*b)->content) != small_coast)
			ft_rb(b);
		return (0);
	}
	while (*((*b)->content) != small_coast)
		ft_rrb(b);
	return (0);
}

int	ft_moov_in_a_reverse(t_c_list **a, t_c_list **b, long small_coast)
{
	long	biggest;
	int		pos;
	int		length;

	if (ft_smallest(a, small_coast) || ft_biggest(a, small_coast))
	{
		ft_small_big_moov_reverse(a, b);
		return (0);
	}
	biggest = ft_find_big(a, small_coast);
	pos = ft_find_position(*a, biggest);
	length = ft_count_liste(a);
	if (pos <= length / 2)
	{
		while (*(*a)->content != biggest)
			ft_ra(a);
		ft_pa(a, b);
		return (0);
	}
	while (*(*a)->content != biggest)
		ft_rra(a);
	ft_pa(a, b);
	return (0);
}

int	ft_small_big_moov_reverse(t_c_list **a, t_c_list **b)
{
	int		pos;
	int		length;

	pos = ft_find_position(*a, ft_find_min(*a));
	length = ft_count_liste(a);
	if (pos <= length / 2)
	{
		while (*((*a)->content) != ft_find_min(*a))
			ft_ra(a);
		ft_pa(a, b);
		return (0);
	}
	while (*((*a)->content) != ft_find_min(*a))
		ft_rra(a);
	ft_pa(a, b);
	return (0);
}
