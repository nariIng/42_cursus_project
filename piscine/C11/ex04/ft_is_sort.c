/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 05:54:56 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/23 06:13:47 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_acre(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_decre(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_acre(tab, length, f) == 1 || ft_decre(tab, length, f) == 1)
		return (1);
	else
		return (0);
}
