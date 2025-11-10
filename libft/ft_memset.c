/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:57:43 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 17:59:40 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * this funcion fills the string (block of memory)
 * with specified value (val) for a sepecified Lenght (len)
 * and returns the pointer to the string (str)
 * WHY UNSIGNED CHAR?
 */
/// @brief Fill a byte string with a byte value
/// @param s String to fill with byte
/// @param c value of the byte
/// @param n number of bytes to be written
/// @return first @param s
void	*ft_memset(void *str, int value, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (len > 0)
	{
		*ptr = value;
		ptr++;
		len--;
	}
	return (str);
}
