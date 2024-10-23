/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:14:02 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/23 17:00:41 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_memcpy(void *dest, const void *src, int n)
{
    char *d = (char *) dest;
    const char *s = (const char *) src ;
    int i ;
    
    

    if (d < s)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
        
    }
    else
    {
        i = n;
        while ( i > 0)
        {
                d[i - 1] = s[i - 1];
                i-- ;
            }
            
        } 
        return (dest);
    }


    int main(void)
    {
        char src[] =  "star stop" ; 
        char dest[50] ; 

        ft_memcpy(src, src + 6 , (4 * (sizeof(char)))) ; 
        // char dest ;

        // dest  = *(src + 4) ;
        printf("%s" , src) ; 

        return (0) ;
    }