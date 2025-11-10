/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:55:55 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 22:28:03 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

/// @brief Prints number on the File Descriptor fd, similat to ITOA()
/// @param n Int number to be printed as string
/// @param fd The file descriptor
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		n = -n;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
}
// int main() {
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1) {
//         write(2, "Error opening file\n", 19); 
	// 2 is the file descriptor for standard error
//         return (1);
//     }

//     // Test ft_putnbr_fd by writing an integer to the file
//     int test_number = 0;  // Example integer
//     ft_putnbr_fd(test_number, fd);

//     // Close the file after writing
//     close(fd);

//     return (0);
// }