/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:25:14 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/15 13:18:08 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_arrange_to_tab(char **argv)
{
	char	*str;
	char	**tab;

	str = ft_join_all(argv);
	if (!str)
		return (NULL);
	if (ft_all_space(str))
	{
		free(str);
		write(2, "Error\n", 6);
		ft_error();
	}
	tab = ft_split(str, ' ');
	free (str);
	return (tab);
}

int	ft_all_space(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != 32 && (str[i] < 9 || str[i] > 13))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_join_all(char **argv)
{
	int		i;
	int		j;
	int		v;
	char	*str;

	i = 0;
	j = 1;
	v = 0;
	while (argv[j])
		i += ft_strlen(argv[j++]);
	i += (j - 1);
	str = (char *)ft_calloc(sizeof(char), (i + 1));
	if (!str)
		return (NULL);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			str[v++] = argv[i][j++];
		str[v] = ' ';
		v++;
		i++;
	}
	return (str);
}

long	ft_atol(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

int	ft_count_liste(t_c_list **list)
{
	t_c_list	*temp;
	int			i;

	i = 0;
	if (!(*list))
		return (0);
	if (*list)
	{
		i++;
		temp = (*list)->next;
		while (*(temp->content) != *((*list)->content))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	return (0);
}
