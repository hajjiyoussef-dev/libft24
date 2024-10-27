/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:15:26 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/25 12:38:10 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    return (c) ;
    
} 

// int main()
// {
//     int j = 0;
//     char str[] = "GEEKFORGEEKS\n";
//     char ch;

//     while (str[j]) {
//         ch = str[j];
//         putchar(ft_tolower(ch));
//         j++;
//     }

//     return 0;
// }