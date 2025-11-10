/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eynaksho <eynaksho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:20:36 by eynaksho          #+#    #+#             */
/*   Updated: 2025/03/24 17:44:31 by eynaksho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Checkts if c is a digit
/// @param c Test character
/// @return 1 if c is digit else 0
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int main (int argc, char **argv)
// {
//     if (argc > 1) {
//         if (ft_isdigit(argv[1][0]))
//             printf("**** DIGIT ****\n");
//         else
//             printf("not digit\n");
//     } else {
//         printf("No argument passed\n");
//     }

//     return 0;
// }