/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:45:06 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 20:19:38 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief function locates the first occurrence of the null-terminated string 
///        needle in the string haystack, where not 
///        more than len characters are searched
/// @param haystack String in which needle is searched for 
/// @param needle substring to be searched 
/// @param len Maximum number of characters to be searched 
/// @return If needle is an empty string, haystack is returned; if needle occurs
///        nowhere in haystack, NULL is returned; otherwise a pointer to the 
///        first character of the first occurrence of needle is returned.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
