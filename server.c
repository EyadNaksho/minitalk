#include "minitalk.h"

void	handle_signal(int sig)
{
	(void)sig;
}

int	main(void)
{
	struct sigaction	sa;
	pid_t				pid;

	pid = getpid();
	write(1, "Server PID: ", 12);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	sa.sa_handler = handle_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
