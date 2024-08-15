/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:53:56 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/04 12:46:54 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_finish(pid_t pid)
{
	int	bit;

	bit = 8;
	while (bit--)
	{
		kill(pid, SIGUSR2);
		usleep(SLEEP);
	}
}

void	ft_send_signal(int pid, int signal, int time)
{
	if (signal == 1)
	{
		usleep(time);
		if (kill(pid, SIGUSR1) < 0)
		{
			ft_printf("impossible to send\n");
			exit(0);
			return ;
		}
	}
	else if (signal == 0)
	{
		usleep(time);
		if (kill(pid, SIGUSR2) < 0)
		{
			ft_printf("Impossible to send\n");
			exit(0);
			return ;
		}
	}
}

void	ft_char_to_bit(char *message, pid_t pid)
{
	int	i;
	int	bit;

	i = 0;
	while (message[i])
	{
		bit = 8;
		while (bit--)
		{
			if ((message[i] >> bit) & 1)
				ft_send_signal(pid, 1, 0);
			else
				ft_send_signal(pid, 0, 0);
			usleep(SLEEP);
		}
		i++;
	}
	ft_finish(pid);
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3)
	{
		ft_printf("Invalide nomber of message\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("invalide PID\n");
		return (1);
	}
	if (!ft_strlen(argv[2]))
	{
		ft_printf("your message is empty\n");
		return (1);
	}
	ft_char_to_bit(argv[2], pid);
	return (0);
}
