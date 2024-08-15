/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_ext.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:51:33 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 09:52:08 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallest(t_c_list **b, long a)
{
	t_c_list	*temp;

	if (*((*b)->content) < a)
		return (0);
	temp = (*b)->next;
	while (*(temp->content) != *((*b)->content))
	{
		if (*(temp->content) < a)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_biggest(t_c_list **b, long a)
{
	t_c_list	*temp;

	if (*((*b)->content) > a)
		return (0);
	temp = (*b)->next;
	while (*(temp->content) != *((*b)->content))
	{
		if (*(temp->content) > a)
			return (0);
		temp = temp->next;
	}
	return (1);
}
