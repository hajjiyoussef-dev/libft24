/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:44:03 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/26 14:13:21 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1 = (const unsigned char *)s1;
    const unsigned char *str2 = (const unsigned char *)s2;
    size_t i;
    
    int diff;

    diff = 0;
    i = 0;
    while ((str1[i] ==  str2[i]) && str1[i] && str2[i] && i < n)
    {
        i++; 
    }
    return (str1[i] - str2[i]);
}

// int main(void)
// {
//     char str1[] = "youssefd";
//     char str2[] = "youssefcahv" ;
//     size_t n = 9;
    
//     printf("%d", ft_memcmp(str1,str2,n));
//     return (0);
// }