/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:41:31 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/14 12:52:19 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			len = len + ft_strlen(sep);
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new_string;

	if (size <= 0)
	{
		new_string = malloc (sizeof(char));
		*new_string = 0;
		return (new_string);
	}
	new_string = (char *)malloc (sizeof(char) * ft_strslen(size, strs, sep));
	if (!new_string)
		return (NULL);
	*new_string = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(new_string, strs[i]);
		if (i < size - 1)
			ft_strcat(new_string, sep);
		i++;
	}
	return (new_string);
}
/*#include <stdio.h>
int main()
{
	int		size;
	char	*sep = "***";
	char	*strs[] = {"coucou", "bien", "ca va", "biene"};
	
	size = 4;
	printf("%s", ft_strjoin(size, strs, sep));
	free(ft_strjoin(size, strs, sep));
}*/
