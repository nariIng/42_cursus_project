/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:58:01 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/05 04:21:05 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_check_uppercase(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	ft_check_uppercase(char c);

int main()
{
	char world[] = "QWRWERDKF";
	
	int result = ft_str_is_uppercase(world);
	printf("%d", result);
}*/
