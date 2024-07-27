/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:21:41 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/08 11:30:42 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest != '\0' && i < size)
	{
		++i;
		++dest;
	}
	while (*src != '\0' && i < size)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = '\0';
	while (*src != '\0')
	{
		i++;
		++src;
	}
	return (i);
}
#include <stdio.h>
int main(void)
{
	char a[] = "coucou";
	char b[] = "madame";
	printf("%d \n", ft_strlcat(a, b, 8));
	printf("%s", a);
}
