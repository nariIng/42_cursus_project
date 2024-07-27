/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:39:13 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/13 17:26:18 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	result = (int *)malloc (sizeof(int) * size);
	if (!result)
	{
		result = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (i < size)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*#include <stdio.h>
int	main()
{
	int	a = 26;
	int	b = 36;
	int	*tab;
	int	e;
	int	i;
	
	i = 0;
	ft_ultimate_range(&tab, a, b);
	e = ft_ultimate_range(&tab, a, b);
	printf("%d \n", e);
	while (i < b - a)
	{
		printf("%d  ", tab[i]);
		i++;
	}
	free(tab);
}*/
