/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:03:44 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/27 00:22:36 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_bzero(void *s , size_t num)
// {
//     unsigned char *p;
//     size_t i ;
    
//     i = 0;
//     p = (unsigned char *)s;
//     while (i < num)
//     {
//        p[i] = 0;
//        i++;
//     }
// }
void *ft_calloc(size_t count, size_t size)
{
     char *ptr;

     ptr = malloc(count * size);
     if (!ptr)
        return(NULL);
    ft_bzero(ptr,(count * size));
     return ((void *) ptr);
    
}

// int main(void)
// {
//     int *arr = (int *) ft_calloc(10, sizeof(int));
    
//     if (arr)
//     {
//         for (size_t i = 0; i < 10; i++)
//         {
//         printf("%d",arr[i] );
//         }
        
//         /* code */
//     }
    

//     return (0);
// }