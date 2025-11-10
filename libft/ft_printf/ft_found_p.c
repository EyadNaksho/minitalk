/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 04:04:55 by eynaksho          #+#    #+#             */
/*   Updated: 2025/04/03 09:39:55 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	result;

	i = 0;
	while (*str)
	{
		result = ft_putchar(*str++);
		if (result < 0)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_found_p(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	i += ft_putstr("0x");
	if (i < 0)
		return (-1);
	i += ft_found_x((unsigned long)ptr, 0);
	return (i);
}
