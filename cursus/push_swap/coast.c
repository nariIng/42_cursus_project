/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coast.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:56:36 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 09:49:54 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_find_small_coast(t_c_list **a, t_c_list **b)
{
	int			position;
	int			coast;
	long		coastless;
	t_c_list	*tmp;

	position = 0;
	tmp = (*a)->next;
	coast = ft_coast(*a, a, b);
	coastless = *((*a)->content);
	while (ft_count_liste(a)
		&& (*(tmp->content) != *((*a)->content)))
	{
		if ((ft_coast(tmp, a, b) == coast
				&& *(tmp->content) > coastless)
			|| ft_coast(tmp, a, b) < coast)
		{
			coastless = *(tmp->content);
			coast = ft_coast(tmp, a, b);
			position = ft_find_position(*a, *(tmp->content));
		}
		tmp = tmp->next;
	}
	return (ft_return_position(a, position));
}

long	ft_return_position(t_c_list **a, int position)
{
	t_c_list	*tempo;

	tempo = *a;
	while (position)
	{
		tempo = tempo->next;
		position--;
	}
	return (*tempo->content);
}

int	ft_coast(t_c_list *tmp, t_c_list **a, t_c_list	**b)
{
	long	val;
	int		coast_in_a;
	int		coast_in_b;

	val = *(tmp->content);
	coast_in_a = ft_coast_in_a(a, val);
	coast_in_a++;
	coast_in_b = ft_coast_in_b(b, val);
	return (coast_in_a + coast_in_b);
}

int	ft_coast_in_a(t_c_list **a, long val)
{
	int		pos;
	int		length;

	pos = ft_find_position(*a, val);
	length = ft_count_liste(a);
	if (pos <= length / 2)
	{
		if (pos == 0)
			return (0);
		return (pos);
	}
	return (length - pos);
}

int	ft_coast_in_b(t_c_list **b, long val)
{
	int		smallest;
	int		length;

	length = ft_count_liste(b);
	if (ft_biggest(b, val))
		return (0);
	else if (ft_smallest(b, val))
		return (1);
	smallest = ft_find_small(b, val);
	if (ft_find_position(*b, smallest) <= ft_count_liste(b) / 2)
		return (ft_find_position(*b, smallest));
	return (length - ft_find_position(*b, smallest) + 1);
}
