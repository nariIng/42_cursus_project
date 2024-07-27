/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 08:29:17 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/06 22:10:30 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(char c)
{
	char	*hexx;

	hexx = "0123456789abcdef";
	write(1, &hexx[c / 16], 1);
	write(1, &hexx[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			write(1, "\\", 1);
			ft_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	world[] = "coucou\atu vas bien";
	ft_putstr_non_printable(world);
}*/
