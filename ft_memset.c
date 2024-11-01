/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:10:49 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/31 15:51:09 by yhajji           ###   ########.fr       */
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

// int main(void)
// {
//     int i;
//     //i = 10000;
//     // i = > 1337 ; 00000000 00000000 00000101  00111001
//     //first step  = > 00000000 00000000 00000000 00000000
//     // seconde step => 00000000 00000000 00000101 

//         // i = 2345 ; // 00000000 00000000 00001001  00101001
 
//         // i 2345656

    
//     //   1337 =>     00000101  00111001 
//     ft_memset(&i,0,4); // i => 00000000 00000000 00000000 00000000
//     ft_memset(&i,5,2); // 
//     ft_memset(&i,57,1);
//     printf("%d", i);
//     return (0);
// }

// int main() {
//     unsigned char buffer[20];  // Create a buffer of 10 bytes

//     // Fill the buffer with the value 255, which will be -1 in signed representation
//     ft_memset(buffer, 1, sizeof(buffer));

//     // Print the buffer values as signed integers
//     for (int i = 0; i < sizeof(buffer); i++) {
//         printf("%d ", (int)buffer[i]);  // Print each byte as a signed integer
//     }
//     printf("\n");

//     return 0;
// }


// int main()
// {
//     char arr[2]; // int i ;
//     ft_memset(arr, 37, 2);
//     ft_memset(arr, 13, 1);

//     printf("%d", arr[0]);
//     printf("%d", arr[1]);
// }