/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:29:42 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/28 20:05:12 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  
// size_t ft_strlen(const char *c)
// {
//     int i ;
//     i = 0 ;
//     while (c[i] != '\0')
//     {
//         i++;
//     }
//     return (i);
// }
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dlen ;
    size_t slen ;
    
    i = 0;
    j = 0;
    slen = ft_strlen(src);
    while (dest[j] != '\0')
    {
        j++;
    }
    dlen = j;
    if (size == 0 || dlen >= size )
        return ((slen + size));
    while (src[i] != '\0' && ((dlen + i ) < (size  - 1)))
    {
        dest[dlen + i] = src[i];
        i++;
    }
    dest[dlen + i] = '\0';
    
    return (dlen + slen);
}

// int main(void)
// {
//     char dest[] = "hajjffffff";
//     const char src[] = "hello" ;
//     int res ;
//     res = ft_strlcat(dest, src , 10);
    
//     printf("%d \n" , res);
//     printf("%s" , dest);

//     return (0) ;
    
//}