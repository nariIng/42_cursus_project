/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:22:48 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/08 22:26:54 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;
	int	iter;

	iter = 1;
	temp = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (iter < power)
	{
		nb = nb * temp;
		iter++;
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(0, 0));
}*/
