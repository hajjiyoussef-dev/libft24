/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:28:51 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/01 23:15:06 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (++i < n)
			d[i] = s[i];
	}
	return (dest);
}
// int main(void)
// {
//     char src[] = "hamza" ;
//     ft_memmove(src + 2, src, 3);
//     printf("%s" , src + 2);

//     return (0);
// }
