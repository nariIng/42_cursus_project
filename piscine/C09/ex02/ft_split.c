/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:13:48 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/20 23:13:50 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_str(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !ft_is_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_sep_len(char *str, char *charset)
{
	int	count;

	count = 0;
	while (str[count] && !(ft_is_sep(str[count], charset)))
		count ++;
	return (count);
}

char	*ft_is_str(char *str, char *charset)
{
	int		len;
	int		i;
	char	*is_str;

	i = 0;
	len = ft_sep_len(str, charset);
	is_str = (char *)malloc (sizeof(char) * (len + 1));
	while (i < len)
	{
		is_str[i] = str[i];
		i++;
	}
	is_str[i] = '\0';
	return (is_str);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc (sizeof(char *) * ft_count_str(str, charset) + 1);
	if (!tab)
		return (0);
	while (*str)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		if (str[i] != '\0')
		{
			tab[j] = ft_is_str(str, charset);
			j++;
		}
		while (*str && !ft_is_sep(*str, charset))
			str++;
	}
	tab[j] = 0;
	return (tab);
}
/*int	main()
{
	int	i;
	char **tab;

	i = 0;
	//printf("%d \n",ft_count_tab("salut je suis Narindra coucou ocucou", " "));
	tab = ft_split("salut\njesuis\nNarindra\ncoucou", "\n");
	while (i < 4)
	{
		printf("%s \n", tab[i]);
		i++;
	}
	free(ft_split("salut je suis Narindra coucou", " "));
}*/
