#include "minitalk.h"

int	g_bit_index = 0;

void	handle_signal(int sig)
{
	static unsigned char	current_char = 0;

	if (sig == SIGUSR1)
		current_char |= (1 << g_bit_index);
	g_bit_index++;
	if (g_bit_index == 8)
	{
		if (current_char == '\0')
			write(1, "\n", 1);
		else
			write(1, &current_char, 1);
		g_bit_index = 0;
		current_char = 0;
	}
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
	sa.sa_flags = SA_RESTART;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
	{
		write(2, "Error: Failed to set signal handler\n", 37);
		return (1);
	}
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
	{
		write(2, "Error: Failed to set signal handler\n", 37);
		return (1);
	}
	while (1)
		pause();
	return (0);
}
