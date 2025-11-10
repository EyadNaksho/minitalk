/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyadnaksho <eyadnaksho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:30:18 by eynaksho          #+#    #+#             */
/*   Updated: 2025/11/10 15:33:09 by eyadnaksho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Checks if c is alphanumeric
/// @param c character to tbe checked
/// @return 0 if character test fails and 1 if it passe
int	ft_isalnum(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// int main (int argc, char **argv)
// {
//     if (argc > 1) {
//         if (ft_isalnum(argv[1][0]))
//             printf("**** CHARACTER/NUMBER ****\n");
//         else
//             printf("not character/number\n");
//     } else {
//         printf("No argument passed\n");
//     }

//     return (0);
// }