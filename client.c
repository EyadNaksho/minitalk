/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyadnaksho <eyadnaksho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:31:54 by eyadnaksho        #+#    #+#             */
/*   Updated: 2025/11/10 15:38:34 by eyadnaksho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

volatile sig_atomic_t	g_ack_received = 0;

void	ack_handler(int sig)
{
	(void)sig;
	g_ack_received = 1;
}

void	send_char(pid_t server_pid, char c)
{
	int	bit;
	int	result;

	bit = 0;
	while (bit < 8)
	{
		g_ack_received = 0;
		if (c & (1 << bit))
			result = kill(server_pid, SIGUSR1);
		else
			result = kill(server_pid, SIGUSR2);
		if (result == -1)
		{
			ft_printf("Error: Failed to send signal\n");
			exit(1);
		}
		while (!g_ack_received)
			usleep(50);
		bit++;
	}
}

void	send_message(pid_t server_pid, char *message)
{
	int	i;

	i = 0;
	while (message[i])
	{
		send_char(server_pid, message[i]);
		i++;
	}
	send_char(server_pid, '\0');
}

int	main(int argc, char **argv)
{
	pid_t				server_pid;
	struct sigaction	sa;

	if (argc != 3)
	{
		ft_printf("Invalid args\nUsage: ./client <server_pid> <message>\n");
		return (1);
	}
	sa.sa_handler = ack_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sa, NULL);
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
	{
		ft_printf("Error: Invalid PID\n");
		return (1);
	}
	if (!argv[2] || !argv[2][0])
	{
		ft_printf("Error: Empty message\n");
		return (1);
	}
	send_message(server_pid, argv[2]);
	return (0);
}
