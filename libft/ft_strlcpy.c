/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:19:08 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 19:10:00 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copies string from source to destination, hence overwriting dst
/// @param dst The string where source will be copied
/// @param src The string to be copied 
/// @param size number of bytes to be copied (size - 1, preciesley) 'casue of \0
/// @return source length
size_t	ft_strlcpy(char *__restrict dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen((char *)src);
	if (dstsize == 0)
		return (len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
