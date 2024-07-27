/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:35:37 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/08 19:49:55 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factor;
	int	result;

	factor = 1;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (factor <= nb)
	{
		result *= (factor);
		factor++;
	}
	return (result);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(5));
}*/
