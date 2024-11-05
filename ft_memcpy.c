/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:14:02 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 16:11:52 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <string.h>
// int main(void)
// {
//     char src[] =  "abcde" ;
//     // char *dest = "hamzara";

//    // char *me = ft_memcpy(((void *)0), "segfaulter tu dois", 17);
//     char *me = ft_memcpy(src + 1, src , 3);
//     char *ther = memcpy(src + 1, src , 3) ;
//    	printf("%s\n" , me );
//     printf("%s\n" , ther);

//     return (0) ;
// }
