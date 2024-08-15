/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shorting_a_ext.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:17:20 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 10:18:28 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_coast_reverse(t_c_list *tmp, t_c_list **a, t_c_list **b)
{
	long	val;
	int		coast_in_a;
	int		coast_in_b;

	val = *(tmp->content);
	coast_in_b = ft_coast_in_a(b, val);
	coast_in_b++;
	coast_in_a = ft_coast_in_a_reverse(a, val);
	return (coast_in_a + coast_in_b);
}

int	ft_coast_in_a_reverse(t_c_list **a, long val)
{
	int		biggest;
	int		length;

	length = ft_count_liste(a);
	if (ft_smallest(a, val))
		return (0);
	else if (ft_biggest(a, val))
		return (1);
	biggest = ft_find_big(a, val);
	if (ft_find_position(*a, biggest) <= ft_count_liste(a) / 2)
		return (ft_find_position(*a, biggest));
	return (length - ft_find_position(*a, biggest) + 1);
}

long	ft_find_big(t_c_list **a, long val)
{
	t_c_list	*temp;
	long		big;

	temp = (*a)->next;
	if (val > ft_find_max(*a))
		return (val);
	big = ft_find_max(*a);
	if (*((*a)->content) > val && *((*a)->content) < big)
		big = *((*a)->content);
	while (*(temp->content) != *((*a)->content))
	{
		if (*(temp->content) > val && *(temp->content) < big)
			big = *(temp->content);
		temp = temp->next;
	}
	return (big);
}
