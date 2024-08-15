/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:33:05 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 09:51:53 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_find_max(t_c_list *list)
{
	long		max;
	t_c_list	*temp;

	temp = list->next;
	max = *(list->content);
	while (*(temp->content) != *(list->content))
	{
		if (*(temp->content) > max)
			max = *(temp->content);
		temp = temp->next;
	}
	return (max);
}

long	ft_find_min(t_c_list *list)
{
	long		min;
	t_c_list	*temp;

	temp = list->next;
	min = *(list->content);
	while (*(temp->content) != *(list->content))
	{
		if (*(temp->content) < min)
			min = *(temp->content);
		temp = temp->next;
	}
	return (min);
}

int	ft_find_position(t_c_list *list, long val)
{
	t_c_list	*temp;
	int			pos;

	temp = list->next;
	pos = 0;
	if (*(list->content) == val)
		return (pos);
	while (*(temp->content) != *(list->content))
	{
		pos++;
		if (*(temp->content) == val)
			return (pos);
		temp = temp->next;
	}
	return (pos);
}

float	ft_list_mean(t_c_list *list)
{
	t_c_list	*temp;
	long		i;
	float		mean;

	temp = list->next;
	i = *(list->content);
	while (*(temp->content) != *(list->content))
	{
		i += *(temp->content);
		temp = temp->next;
	}
	mean = (float)i / (float)ft_count_liste(&list);
	return (mean);
}

long	ft_find_small(t_c_list **b, long a)
{
	t_c_list	*temp;
	long		small;

	temp = (*b)->next;
	if (a < ft_find_min(*b))
		return (a);
	small = ft_find_min(*b);
	if (*((*b)->content) < a && *((*b)->content) > small)
		small = *((*b)->content);
	while (*(temp->content) != *((*b)->content))
	{
		if (*temp->content < a && *temp->content > small)
			small = *temp->content;
		temp = temp->next;
	}
	return (small);
}
