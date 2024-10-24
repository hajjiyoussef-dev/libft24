/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:10:49 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/24 19:34:42 by yhajji           ###   ########.fr       */
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
int main() {
    unsigned char buffer[20];  // Create a buffer of 10 bytes

    // Fill the buffer with the value 255, which will be -1 in signed representation
    ft_memset(buffer, 1, sizeof(buffer));

    // Print the buffer values as signed integers
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", (int)buffer[i]);  // Print each byte as a signed integer
    }
    printf("\n");

    return 0;
}


