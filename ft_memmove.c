/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:51 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/23 23:01:22 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, unsigned int n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
     unsigned int i;

    i = 0;

    if (d == s)
    {
        return (dest);
    }

    if (d > s && d < s + n)
    {

        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
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

// int main(void)
// {
//     char src[] = "youssef hajjiii" ;

//     char dest[20] ;

//     ft_memmove(src, src + 8, 7);

//     printf("%s", src);

//     return (0);

// }