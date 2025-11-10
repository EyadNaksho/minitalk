/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:03:59 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 17:35:17 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Checks if c is an alphabet
/// @param c character to be checked
/// @return 1 if c is an alpahbet else returns 0
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int main (int argc, char **argv)
// {
//     if (argc > 1) {
//         if (ft_isalpha(argv[1][0]))
//             printf("**** character ****\n");
//         else
//             printf("not character\n");
//     } else {
//         printf("No argument passed\n");
//     }

//     return 0;
// }