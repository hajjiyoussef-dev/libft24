/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:25:00 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/25 21:49:47 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str = (const unsigned char *) s;
    unsigned char ch = (unsigned char) c ;
    size_t i;

    i = 0;
    while (str[i] && i < n)
    {
        if (str[i] == ch)
        {
            return ((void *)str + i);
        }
        i++;
        
    }
    return (0);
      
    
}


// int main(void)
// {
//     char s[] = "youssef hajji hamza hrami" ;
//     char c = ' ' ;
//     int  n = 7 ;
//     printf("%s", ft_memchr(s,c,n)) ;
//     return (0);
// }