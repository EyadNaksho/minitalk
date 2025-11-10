/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 01:15:51 by eynaksho          #+#    #+#             */
/*   Updated: 2025/04/04 22:11:05 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long x, const int z)
{
	if (x <= 9)
		return (ft_putchar(x + '0'));
	else
	{
		if (z == 0)
			return (ft_putchar(x + 'a' - 10));
		else
			return (ft_putchar(x + 'A' - 10));
	}
}

int	ft_found_x(unsigned long x, const int z)
{
	int	i;
	int	result;

	if (x == 0)
		return (ft_putchar('0'));
	else if (x >= 16)
	{
		result = ft_found_x(x / 16, z);
		if (result < 0)
			return (-1);
		i = result;
		result = ft_found_x(x % 16, z);
		if (result < 0)
			return (-1);
		i += result;
	}
	else
		return (ft_print_hex(x, z));
	return (i);
}
