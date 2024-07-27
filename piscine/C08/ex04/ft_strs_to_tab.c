/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:59:34 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/16 01:02:03 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*new;

	size = 0;
	while (src[size])
		size++;
	new = (char *)malloc(sizeof (char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*dest;

	dest = malloc (sizeof (t_stock_str) * (ac + 1));
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].size = 0;
	dest[i].str = 0;
	dest[i].copy = 0;
	return (dest);
}
/*int	main(int argc, char *argv[])
{
	int	i;
 	t_stock_str *ok = ft_strs_to_tab(argc, argv);
 	
 	i = 0;
 	while (i++ < argc)
 		printf("%d\t %s \t %s\n", ok[i].size, ok[i].str, ok[i].copy);
 	
	return (0);
}*/
