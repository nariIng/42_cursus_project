/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:20:18 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/23 10:28:11 by enarindr         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	dim;

	i = 0;
	dim = ft_strlen(tab);
	while (i < dim - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) <= 0)
		{
			i++;
		}
		else if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_str(&tab[i], &tab[i + 1]);
			i = 0;
		}
	}
}
/*int	main(int argc, char **argv)
{
	int	i;
	int	dim;

	i = 1;
	ft_sort_string(argv);
	while (i < 7)
	{	
		printf("%s \n", argv[i]);
		i++;
	}
}*/
