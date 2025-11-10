/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 00:26:28 by eynaksho          #+#    #+#             */
/*   Updated: 2025/04/29 16:01:43 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_num(int num)
{
	int		i;
	char	c;
	int		result;

	i = 0;
	if (num < 10)
	{
		result = ft_putchar(num + '0');
		if (result < 0)
			return (-1);
		i += result;
	}
	else
	{
		result = ft_print_num(num / 10);
		if (result < 0)
			return (-1);
		i += result;
		c = (num % 10) + '0';
		result = ft_putchar(c);
		if (result < 0)
			return (-1);
		i += result;
	}
	return (i);
}

int	ft_found_d(int d)
{
	int	result;

	result = 0;
	if (d == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (d == 0)
		return (ft_putchar('0'));
	if (d < 0)
	{
		d = -d;
		result = ft_putchar('-');
		if (result < 0)
			return (-1);
	}
	result += ft_print_num(d);
	if (result < 0)
		return (-1);
	return (result);
}
