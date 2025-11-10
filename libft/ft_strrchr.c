/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:28:10 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 21:16:02 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief "string reverse character" Locates last occurence of
///			(char c) in string c
/// @param s The string to be searched for
/// @param c The character c
/// @return Pointer to the located character or NULL if c doesnot appear in s
char	*ft_strrchr(const char *s, int c)
{
	char			*ptr_s;
	char			*ptr_last;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr_s = (char *)s;
	ptr_last = NULL;
	while (*ptr_s)
	{
		if (*ptr_s == uc)
			ptr_last = ptr_s;
		ptr_s++;
	}
	if (*ptr_s == uc)
		return (ptr_s);
	return (ptr_last);
}
