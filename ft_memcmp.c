/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:44:03 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/29 23:51:00 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if ((str1[i] != str2[i]))
			return ((str1[i] - str2[i]));
		i++;
	}
	return (0);
}
// #include <string.h>
// int main(void)
// {
//     // char str1[] = "youssefd";
//     // ft_memcmp(NULL,str2,n)
//     char str2[] = "youssefc" ;
//     size_t n = 9;    
//     printf("%d : ",ft_memcmp("youssefd",str2,n)  /*memcmp(NULL,str2,n)*/);
//     return (0);
// }
