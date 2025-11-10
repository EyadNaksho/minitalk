/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:11:58 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 18:44:40 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief This function copies the specified number of bytes from the source 
///   memory block to the destination memory block. The function assumes  
///   that both memory blocks are already allocated and that their sizes are at 
///   least n bytes.The function does not check for overlap between the source  
///   and destination memory blocks
/// @param dst Pointer to destination memory block
/// @param src Pointer to source memory block
/// @param n Number of bytes to copy
/// @return A pointer to memory destination block
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	if (!dst && !src)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	while (n > 0)
	{
		*ptr_dst++ = *ptr_src++;
		n--;
	}
	return (dst);
}
