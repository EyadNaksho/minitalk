/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:56:26 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 20:17:28 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief This function compares the first n bytes of two memory areas s1 && s2
/// @param s1 A pointer to the first memory area to compare.
/// @param s2 A pointer to the second memory area to compare.
/// @param n The number of bytes to compare between the two memory areas.
/// @return 0 if two strings are identical else  it returns the difference 
///      between the first two differing bytes, treated as unsigned char values.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
