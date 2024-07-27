/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:52:30 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/06 09:57:15 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_printable(char c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_check_printable(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//#include <stdio.h>
int	ft_check_printable(char c);

int main()
{
	char world[] = "QWRWERDKF";
	char result = ft_str_is_printable(world) + '0';
	write(1, &result, 1);
}
