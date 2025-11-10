/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 00:30:44 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 21:15:30 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief "string length concatenation" Concatenates src string to
/// 		destination in a maximum destination buffer size of
/// @param dst The destination string to be concatenated
/// @param src The string to concatenate to dst
/// @param size expected destination buffer size including the '\0'
/// @return length src + dst
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	dstlen = 0;
	srclen = ft_strlen((char *)src);
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	while (src[i] && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
