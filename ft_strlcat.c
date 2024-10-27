/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:29:42 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/24 23:00:12 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  
#include <string.h>
int ft_strlen(const char *c)
{
    int i ;
    i = 0 ;
    while (c[i] != '\0')
    {
        i++;
    }
    return (i);
}
int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int dlen ;
    unsigned int slen ;
    
    i = 0;
    j = 0;
    while (dest[j] != '\0')
    {
        j++;
    }
    dlen = j;
    slen = ft_strlen(src);
    if (size == 0 || dlen >= size )
    {
        return ((slen + size));
    }
    while (src[i] != '\0' && i < size - dlen - 1)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    
    return (dlen + slen);
    
}

int main(void)
{
    char dest[] = "hajji";
    char src[] = "hello" ;
    int res ;
    res = ft_strlcat(dest, src , 4);
    
    printf("%d \n" , res);
    printf("%s" , src);

    return (0) ;
    
}