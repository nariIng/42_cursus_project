/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:13:07 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/08 23:19:56 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_abolute_value(double a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

int	ft_sqrt(int nb)
{
	double	x;
	double	buff;
	double	epsilon;

	x = (double) nb;
	buff = x;
	epsilon = 0.00001;
	if (x < 0.0)
		return (0);
	while (ft_abolute_value(buff * buff - x) > epsilon)
	{
		buff = 0.5 * (buff + x / buff);
	}
	if ((buff - (int)buff) > 0.00001)
		return (0);
	else
		return (buff);
}
/*#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(30000));
}*/
