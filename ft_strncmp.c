/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:34:13 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/25 18:04:57 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    int diff;

    i = 0;
    diff = 0;
    while ((s1[i] != '\0' && s2[i] != '\0') && (unsigned) i < n)
    {
        diff = s1[i] - s2[i] ;
        if (diff != 0)
        {
            break;
        }
        i++;
        
    }

    return (diff) ;
}


// int main(void)
// {
//     char s1[] = "abcsd";
//     char s2[] = "abcsf";
    
//   int  res = ft_strncmp(s1,s2,4);

//     printf("%d" , res) ;

//     return (0) ;
// }