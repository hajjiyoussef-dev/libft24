/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:54:20 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 17:10:50 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last_one;
	unsigned char	c1;

	last_one = NULL;
	c1 = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == c1)
		{
			last_one = s;
		}
		s++;
	}
	if (c1 == '\0')
		return ((char *)s);
	return ((char *)last_one);
}
// int main(void)
// {
//     char s[] = "yousdddddsFFFFFFDSADef hajji" ;
//     char c = 'F' ;    
//     printf("%s" , ft_strrchr(s,c));
//     return (0);
// }
