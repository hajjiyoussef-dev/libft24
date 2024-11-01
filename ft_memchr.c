/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:25:00 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/01 22:34:42 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (const unsigned char *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (0);
}
// #include <string.h>
// int main(void)
// {
//     char *src = "/|\x12\xff\x09\0\x42\042\0\42|\\";
//  	int size = 12;
//     // char s[] = "youssef hajji hamza hrami" ;
//     // char c = '\0' ;
//     // int  n = 20 ;
//    //printf("%s", ft_memchr(src,0,0)) ;
//     printf("%s", memchr(NULL,3,size)) ;
//     return (0);
// }
