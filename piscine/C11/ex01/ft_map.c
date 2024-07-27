/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 02:15:55 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/23 02:22:26 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new_tab;

	i = 0;
	new_tab = (int *) malloc(sizeof (int) * length);
	while (i < length)
	{
		new_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (new_tab);
}
