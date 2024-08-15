/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circulaire_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 08:19:47 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 11:13:01 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstfree(t_c_list **list)
{
	t_c_list	*temp;
	t_c_list	*tmp;

	if (*list)
	{
		temp = (*list)->prev;
		while ((temp->content) != (*list)->content)
		{
			tmp = temp->prev;
			free (temp);
			temp = tmp;
		}
		free(*list);
		return (0);
	}
	return (0);
}

t_c_list	*ft_newlist(long *content)
{
	t_c_list	*new;

	new = (t_c_list *) malloc(sizeof(t_c_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->prev = new;
	new->next = new;
	return (new);
}

void	ft_add_back_list(t_c_list **list, t_c_list *new)
{
	t_c_list	*temp;

	if (list && new)
	{
		if (*list == NULL)
			*list = new;
		if ((*list)->prev == *list && (*list)->next == *list)
		{
			new->prev = *list;
			(*list)->next = new;
			new->next = *(list);
			(*list)->prev = new;
		}
		else
		{
			temp = (*list)->prev;
			new->prev = temp;
			temp->next = new;
			new->next = (*list);
			(*list)->prev = new;
		}
	}
}
