/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moovs_ext_ext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:00:13 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 10:00:39 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rrb(t_c_list **b)
{
	if (*b)
	{
		*b = (*b)->prev;
		ft_printf("rrb\n");
		return (0);
	}
	return (1);
}

int	ft_rra(t_c_list **a)
{
	if (*a)
	{
		*a = (*a)->prev;
		ft_printf("rra\n");
		return (0);
	}
	return (1);
}

int	ft_rrr(t_c_list **a, t_c_list **b)
{
	if (*a || *b)
	{
		if (*a)
			*a = (*a)->prev;
		if (*b)
			*b = (*b)->prev;
		ft_printf("rrr\n");
		return (0);
	}
	return (1);
}
