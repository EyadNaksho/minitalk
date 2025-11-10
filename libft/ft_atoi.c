/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:05:57 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 20:33:00 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief "ASCII to Integer" Converts charcters to integers
/// 		- Inital whitespaces are skipped
///			- Only either sign(+ || -) is allowed with occurence of once 
/// @param str The string to be converted to integers
/// @return return an integer 
int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10;
		res = res + *str - '0';
		str++;
	}
	return (sign * res);
}
