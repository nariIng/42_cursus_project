/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:55:08 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/05 03:56:38 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_check_lowercase(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	ft_check_lowercase(char c);

int main()
{
	char world[] = "wqeqwe";
	
	int result = ft_str_is_lowercase(world);
	printf("%d", result);
}*/
