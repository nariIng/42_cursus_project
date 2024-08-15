/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 07:17:26 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 11:07:44 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char		**tab;
	long		*tab_i;
	t_c_list	*a;
	t_c_list	*b;

	tab = ft_check_error(argc, argv);
	if (!tab)
		return (1);
	tab_i = ft_make_integer(tab);
	if (!tab_i)
		return (1);
	a = ft_convert_list(tab_i, tab);
	if (!a)
		return (1);
	b = NULL;
	ft_short (&a, &b);
	ft_exit(a, b, tab_i);
	return (0);
}

int	ft_short(t_c_list **a, t_c_list **b)
{
	if (ft_is_short(a))
		return (0);
	if (ft_count_liste(a) <= 3)
		ft_three_short(a);
	else if (ft_count_liste(a) > 3)
	{
		ft_first_moov(a, b);
		while (ft_count_liste(a) > 3
			&& !ft_is_short(a))
			ft_big_short(a, b);
		ft_three_short(a);
		while (ft_count_liste(b))
			ft_big_short_reverse(a, b);
		ft_arrange_a(a);
	}
	return (0);
}

int	ft_arrange_a(t_c_list **a)
{
	int		pos;
	int		length;

	pos = ft_find_position(*a, ft_find_min(*a));
	length = ft_count_liste(a);
	if (pos <= length / 2)
	{
		while (*((*a)->content) != ft_find_min(*a))
			ft_ra(a);
		return (0);
	}
	while (*((*a)->content) != ft_find_min(*a))
		ft_rra(a);
	return (0);
}

int	ft_arrange_b(t_c_list **b)
{
	int		pos;
	int		length;

	pos = ft_find_position(*b, ft_find_max(*b));
	length = ft_count_liste(b);
	if (pos <= length / 2)
	{
		while (*((*b)->content) != ft_find_max(*b))
			ft_rb(b);
		return (0);
	}
	while (*((*b)->content) != ft_find_max(*b))
		ft_rrb(b);
	return (0);
}

int	ft_reverse_short(t_c_list **a, t_c_list **b)
{
	t_c_list	*tmp;
	t_c_list	*temporary;

	tmp = (*b)->next;
	if (ft_count_liste(a) == 0)
	{
		if (ft_count_liste(b) < 3)
		{
			if (*(tmp->content) < *(*b)->content)
				return (0);
		}
		temporary = tmp->next;
		if (*(tmp->content) < *(*b)->content)
			return (0);
		while (*(temporary->content) != *(*b)->content)
		{
			if (*(tmp->content) < *(temporary->content))
				return (0);
			tmp = tmp->next;
			temporary = tmp->next;
		}
		return (1);
	}
	return (0);
}
