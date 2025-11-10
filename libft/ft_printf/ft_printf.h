/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:51:00 by eynaksho          #+#    #+#             */
/*   Updated: 2025/04/03 07:58:24 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// # define HEX_C "0123456789ABCDEF"
// # define HEX_S "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_found_s(char *s);
int	ft_found_d(int d);
int	ft_found_x(unsigned long x, const int c);
int	ft_found_p(void *ptr);
int	ft_found_u(unsigned int u);

#endif