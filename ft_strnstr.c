/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:22:15 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/01 22:05:07 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    if ( *needle == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < len)
    { 
        j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len  )
        {
            j++;
        }
        if (needle[j] == '\0')
            return ((char *)haystack + i);
        i++;
    }

    return (NULL);
    
    
    
    
}

// #include <string.h>
// int main(void)
// {
//     //char s1[] = "youssef hajji hajji" ;
//     char s2[] = "hajji";

//     char *res ;
//     res = strnstr(0,s2, 0); 
//     printf("%s", res);

//     return (0);
// }
