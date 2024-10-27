/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:35:44 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/25 12:50:50 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
// size_t ft_strlen(const char *c)
// {
//     int i ;
//     i = 0 ;
//     while (c[i] != '\0')
//     {
//         i++;
//     }
//     return (i);
// }
    
size_t ft_strlcpy(char *dest, const char *src, int size)
{
    // const char *s;
    int src_len;
    int len_to_copy;
    int i;

    
    src_len = ft_strlen(src); 
    len_to_copy = 0;
    i = 0;
    if (size > 0)
    {
        if (src_len >= size)
        {
            len_to_copy = (size - 1);
        }
        else
        {
            len_to_copy = src_len;
        }
        while (i <= len_to_copy)
        {
            dest[i] = src[i];
            i++;
        }
        dest[len_to_copy] = '\0' ;
    }
    return (len_to_copy) ;
} 

// int main(void)
// {
//     char src[] = "youssef hajji" ;
//     char dest[20] ;
//     int res ;
//     res = ft_strlcpy(dest, src, 14) ;
//     printf("%d \n", res);

//     printf("%s", dest) ;
//     return (0);
// }