/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:10:49 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/22 23:31:59 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void *ft_memset(void *ptr, int value, int size)
{
    unsigned char *p = (unsigned char *) ptr ;
    int i ;

    i = 0;
    while (size--)
    {
        *p++ = (unsigned char ) value;
    }
    return (ptr);
} 



