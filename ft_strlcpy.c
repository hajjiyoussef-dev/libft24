/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:35:44 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/30 14:38:08 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
    
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size > 0)
    {
       while (src[i]  && i < (size - 1))
       {
         dest[i] = src[i];
         i++;
       }
       dest[i] = '\0';
       
    }
    return (ft_strlen(src));
    
}
// int main(void)
// {
//     char src[] = "youssef" ;
//     char dest[7] ;

//     int len = ft_strlcpy(dest,src,8);
//     printf("%d , %s",len, dest );
    
//     return (0);
// }


