/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:45:56 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 20:48:50 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Concatenates strings s1 and s1 using memory allocation
/// @param s1 String one 
/// @param s2 String 2
/// @return Pointer to new string and NULL if allocation fails
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(s1))
		ptr[i++] = s1[j++];
	j = 0;
	while (i < len)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
