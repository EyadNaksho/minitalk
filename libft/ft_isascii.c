/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:59:11 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 17:46:23 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Checks if c is an ASCII character
/// @param c Test character
/// @return 1 if c is ASCII else 0
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main (int argc, char **argv)
// {
//     if (argc > 1) {
//         if (ft_isdigit(argv[1][0]))
//             printf("**** ASCII ****\n");
//         else
//             printf("not ascii\n");
//     } else {
//         printf("No argument passed\n");
//     }

//     return 0;
// }