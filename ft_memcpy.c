/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:14:02 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/28 10:28:36 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    size_t i;

    i = 0;
    if (!dest && !src)
        return NULL;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
// #include <string.h>
// int main(void)
// {
//     char src[] =  "wertyuiwerty" ;
//     char dest[] = "test";

//     //char *me = ft_memcpy(((void *)0), "segfaulter tu dois", 17);
//      char *ther = memcpy(src+3, src , 5) ;
//     printf("%s\n" , ther ) ;
//     // printf("%s\n" , ther) ;

//     return (0) ;
// }