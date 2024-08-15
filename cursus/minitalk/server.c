/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:02:07 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/04 12:41:16 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_add_to_str(char *current_mssg, char c)
{
	int		length;
	int		i;
	char	*new_message;

	length = ft_strlen(current_mssg);
	new_message = (char *)malloc(sizeof(char) * (length + 2));
	if (!new_message)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_message[i] = current_mssg[i];
		i++;
	}
	new_message[i] = c;
	new_message[++i] = '\0';
	free(current_mssg);
	return (new_message);
}

void	ft_handler(int signum, siginfo_t *info, void *context)
{
	static char	*current_mssg = NULL;
	static int	bit = 0;
	static int	result = 0;

	(void)info;
	(void)context;
	if (current_mssg == NULL)
		current_mssg = ft_strdup("\0");
	if (signum == SIGUSR2)
		result |= 0;
	else if (signum == SIGUSR1)
		result |= (1 << (7 - bit));
	bit++;
	if (bit == 8)
	{
		current_mssg = ft_add_to_str(current_mssg, result);
		if (result == '\0')
		{
			ft_printf("%s\n", current_mssg);
			free(current_mssg);
			current_mssg = NULL;
		}
		bit = 0;
		result = 0;
	}
}

int	main(void)
{
	struct sigaction	s_sigaction;

	s_sigaction.sa_sigaction = ft_handler;
	sigemptyset(&s_sigaction.sa_mask);
	s_sigaction.sa_flags = 0;
	ft_printf("%d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &s_sigaction, NULL);
		sigaction(SIGUSR2, &s_sigaction, NULL);
	}
	return (0);
}
