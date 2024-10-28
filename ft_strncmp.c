/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:34:13 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/28 23:07:30 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, unsigned int  n)
{
    unsigned int i;
    
    i = 0;
    if (n == 0)
    {
        return (0);
    }
    while (s1[i]  && s2[i] && (s1[i] == s2[i]) &&  i < (n - 1))
    {
        i++;   
    }

    return ((unsigned char )s1[i] - (unsigned char)s2[i]) ;
}


// int main(void)
// {
//     char s1[] = "abcsd";
//     char s2[] = "abcsf";
    
//   int  res = ft_strncmp(s1,s2,5);

//     printf("%d" , res) ;

//     return (0) ;
// }