/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyadnaksho <eyadnaksho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:50:11 by eynaksho          #+#    #+#             */
/*   Updated: 2025/10/05 16:38:37 by eyadnaksho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_next_percent(const char *format, va_list args, int j)
{
	int	i;

	i = 0;
	if (format[j] == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (format[j] == 's')
		i = ft_found_s(va_arg(args, char *));
	else if (format[j] == 'd' || format[j] == 'i')
		i = ft_found_d(va_arg(args, int));
	else if (format[j] == 'u')
		i = ft_found_u(va_arg(args, unsigned int));
	else if (format[j] == 'x')
		i = ft_found_x(va_arg(args, unsigned int), 0);
	else if (format[j] == 'X')
		i = ft_found_x(va_arg(args, unsigned int), 1);
	else if (format[j] == 'p')
		i = ft_found_p(va_arg(args, void *));
	else if (format[j] == '%')
		i = ft_putchar('%');
	else if (i == 0)
		i = ft_putchar(format[j]);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
		{
			j++;
			if (!format[j])
				break ;
			i += ft_next_percent(format, args, j);
		}
		else
			i += ft_putchar(format[j]);
		if (i < 0)
			return (-1);
		j++;
	}
	va_end(args);
	return (i);
}
