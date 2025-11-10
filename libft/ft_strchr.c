/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:33:33 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 20:11:54 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief "string character" Locates the first occurence of c in the string s
/// @param s The string to be searched for c
/// @param c The character c to be searched for
/// @return Pointer to the located character or NULL if c doesnt appear
char	*ft_strchr(const char *s, int c)
{
	char			*ptr_s;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr_s = (char *)s;
	while (*ptr_s)
	{
		if (*ptr_s == uc)
			return (ptr_s);
		ptr_s++;
	}
	if (*ptr_s == uc)
		return (ptr_s);
	return (NULL);
}
