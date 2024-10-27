/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:04:04 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/25 15:06:02 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    
    while (*s != '\0')
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        s++;
        
    }
    return (0);
    
} 

// int main(void)
// {
//     char s[] = "youssef hajji" ;
//     char c = 's' ;
     
//     printf("%s" , ft_strchr(s,c));

//     return (0);
// }