/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:45:21 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 18:58:59 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copies a block of memory from one location to another
///		This function copies the specified number of bytes from the source 
///		memory block to the destination memory block. Unlike memcpy(), 
///		this function ensures that the memory blocks do not overlap by copying 
///		the bytes in reverse order if necessary.
///		Copy forwards when dst < src.
///		Copy backwards when dst > src (to prevent overlapping).
/// @param dst A pointer to destination memory block
/// @param src A pointer to source memory block
/// @param len The number of bytes to copy
/// @return A pointer to destination memory block
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_src;
	char	*ptr_dst;

	if (!dst && !src)
		return (NULL);
	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	if (ptr_dst < ptr_src)
		while (len--)
			*ptr_dst++ = *ptr_src++;
	else
	{
		ptr_dst += len - 1;
		ptr_src += len - 1;
		while (len--)
			*ptr_dst-- = *ptr_src--;
	}
	return (dst);
}
