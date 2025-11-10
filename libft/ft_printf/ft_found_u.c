/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 07:31:43 by eynaksho          #+#    #+#             */
/*   Updated: 2025/04/29 16:38:43 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_recursive(unsigned int u)
{
	int	i;
	int	result;

	i = 0;
	if (u < 10)
	{
		result = ft_putchar(u + '0');
		if (result < 0)
			return (-1);
		i += result;
	}
	else
	{
		result = ft_recursive(u / 10);
		if (result < 0)
			return (-1);
		i += result;
		result = ft_putchar((u % 10) + '0');
		if (result < 0)
			return (-1);
		i += result;
	}
	return (i);
}

int	ft_found_u(unsigned int u)
{
	int	result;

	result = ft_recursive(u);
	if (result < 0)
		return (-1);
	return (result);
}
