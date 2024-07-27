/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:06:48 by enarindr          #+#    #+#             */
/*   Updated: 2024/02/25 10:06:50 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_count_str(char const *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (count);
}

static int	ft_str_len(char const *str, char c)
{
	int	count;

	count = 0;
	while (str[count] && str[count] != c)
		count ++;
	return (count);
}

static char	*ft_creat_str(char const *str, char c)
{
	int		len;
	int		i;
	char	*is_str;

	i = 0;
	len = ft_str_len(str, c);
	is_str = (char *)malloc (sizeof(char) * (len + 1));
	while (i < len)
	{
		is_str[i] = str[i];
		i++;
	}
	is_str[i] = '\0';
	return (is_str);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**tab;

	j = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc (sizeof (char *) * ft_count_str(s, c) + 1);
	if (!tab)
		return (NULL);

	printf("%d\n", ft_count_str(s, c));
	tab[ft_count_str(s, c)] = NULL;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			tab[j] = ft_creat_str(s, c);
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	return (tab);
}


int	main()
{
	char	*s = "coucou  je suis    un ami ";
	char	**tab;

	int	i = 0;
	tab = ft_split(s, ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	} 
}