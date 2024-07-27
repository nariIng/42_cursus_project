/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:45:16 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/05 03:53:22 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_check_numeric(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	ft_check_numeric(char c);

int main()
{
	char world[] = "132k45";
	
	int result = ft_str_is_numeric(world);
	printf("%d", result);
}*/
