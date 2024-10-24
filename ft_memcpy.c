/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:14:02 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/23 21:58:42 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_memcpy(void *dest, const void *src, int n)
{
    char *d = (char *)dest;
    const char *s = (const char *)src;
    int i;

    if (d < s) // haadi -> forword (no overlape)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i]; // copy form the start
            i++;
        }
    }
    else
    {
        i = n;
        while (i > 0) // hadi backword -> (overlaping)
        {
            d[i - 1] = s[i - 1]; // copy from the end
            i--;
        }
    }
    return (dest);
}

// int main(void)
// {
//     char src[] =  "start stopf" ;
//     printf("%s \n" , src) ;

//     ft_memcpy(src, src + 6 , (5 * (sizeof(char)))) ;

//     printf("%s" , src) ;

//     return (0) ;
// }