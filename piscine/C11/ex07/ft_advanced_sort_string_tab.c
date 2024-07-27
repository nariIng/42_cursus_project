/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:26 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/23 13:31:31 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	dim;

	i = 0;
	dim = ft_strlen(tab);
	while (i < dim - 1)
	{
		if (cmp(tab[i], tab[i + 1]) <= 0)
		{
			i++;
		}
		else if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_str(&tab[i], &tab[i + 1]);
			i = 0;
		}
	}
}
