#include "minitalk.h"

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
	return (0);
}
