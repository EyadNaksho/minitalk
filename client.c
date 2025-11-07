#include "minitalk.h"

void	send_char(pid_t server_pid, char c)
{
	int	bit;
	int	result;

	bit = 0;
	while (bit < 8)
	{
		if (c & (1 << bit))
			result = kill(server_pid, SIGUSR1);
		else
			result = kill(server_pid, SIGUSR2);
		if (result == -1)
		{
			write(2, "Error: Failed to send signal\n", 30);
			exit(1);
		}
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
	pid_t	server_pid;

	if (argc != 3)
	{
		write(2, "Error: Invalid arguments\n", 25);
		write(2, "Usage: ./client <server_pid> <message>\n", 40);
		return (1);
	}
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
	{
		write(2, "Error: Invalid PID\n", 19);
		return (1);
	}
	if (!argv[2] || !argv[2][0])
	{
		write(2, "Error: Empty message\n", 21);
		return (1);
	}
	send_message(server_pid, argv[2]);
	return (0);
}
