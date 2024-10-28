/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:51 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/28 14:14:34 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
     size_t i;

    if (d == s || n == 0)
    {
        return (dest);
    }

    if (d > s)
    {
        while (n--)
        {
            d[n] = s[n];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
// #include <string.h>
// int main(void)
// {
//     char dst1[0xF0];
//  	char dst2[0xF0];
//  	char *data = "thi\xc3\x9f \xc3\x9f\xde\xad\xbe\xeftri\xc3\xb1g will be \xc3\xb8v\xc3\xa9rlap\xc3 !\r\n";
//     int size = 0xF0 - 0xF;

//       //char *arr1 = memmove( dst1,data, size);
    
// // // //     char src[] = "123456" ;
// // // //     printf("%s\n", src + 2);
// // // //    // char dest[20] ;

//     char *arr = ft_memmove( dst1,data, size);
// // // //    char *arr1 = memmove( src + 2,src, 4);
// // // //     char *arr11 = memmove( src + 2,src, 4);
//     printf("%s\n ",arr );

//     return (0);

// }