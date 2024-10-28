/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:04:04 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/28 17:06:42 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned char c1 = (unsigned char) c ;
    
    while (*s)
    {
        if (*s == c1)
        {
            return ((char *)s);
        }
        s++;
        
    }
    if ( c1 == '\0')
        return ( (char *)s);
    
    return (0);
    
} 
// #include <string.h>
// int main(void)
// {
//     // char s[] = "" ; //ft_strchr(s, 0) == s + strlen(s)
//     // char c = '\0' ;
//    // char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//  	//char *d1 = strchr(src, '\0');
//  	char *d2 = ft_strchr(((void *)0), '\0'); //ft_strchr(src, '\0');
    
//     //printf("%s" , d1);
//     printf("%s" , d2);

//     return (0);
// }