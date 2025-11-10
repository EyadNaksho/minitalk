/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:41:58 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 21:49:16 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Prints the character c to the given file descriptor  
/// @param c The character to output
/// @param fd File descriptor (destination)
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
