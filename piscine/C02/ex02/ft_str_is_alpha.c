/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:27:15 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/05 03:43:42 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_alpha(char c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_check_alpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	ft_check_alpha(char c);

int main()
{
	char world[] = "QWRWERDKF";
	
	int result = ft_str_is_alpha(world);
	printf("%d", result);
}*/
