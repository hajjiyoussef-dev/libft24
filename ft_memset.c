/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:10:49 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/01 23:18:11 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *ptr, int value, int size)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *)ptr;
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
// int main()
// {
//     char arr[2]; // int i ;
//     ft_memset(arr, 37, 2);
//     ft_memset(arr, 13, 1);
//     printf("%d", arr[0]);
//     printf("%d", arr[1]);
// }
