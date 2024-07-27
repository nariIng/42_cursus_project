/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:00:01 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/13 15:34:55 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	j;
	int	*range;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	range = (int *)malloc (sizeof(int) * (size));
	if (!range)
	{
		range = NULL;
		return (0);
	}
	i = min;
	j = 0;
	while (i < max)
	{
		range[j++] = i++;
	}
	return (range);
}
/*#include <stdio.h>
int	main()
{
	int a = 135;
	int b = 225;
	int i;
	int	*e;
	
	i = 0;	
	e = ft_range(a, b);

	while (i < b - a)
	{
		printf("%d  ", e[i]);
		i++;
	}
	free(e);
}*/
