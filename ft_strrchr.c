/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:54:20 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/25 15:58:24 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s , int c)
{
    const char *last_one ;

    last_one = NULL ;
    while (*s != '\0')
    {
        if (*s == (char)c)
        {
            last_one  =  s ;
        }
         s++ ;
    }    
    return ((char *)last_one);
    
}

// int main(void)
// {
//     char s[] = "yousdddddsFFFFFFDSADef hajji" ;
//     char c = 'a' ;
     
//     printf("%s" , ft_strrchr(s,c));

//     return (0);
// }