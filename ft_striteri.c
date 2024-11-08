/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:51:39 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/02 00:06:03 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// void function(unsigned int i, char *c )
// {
//     if ( i % 2 == 0)
//         *c = ft_tolower(*c);
// }
// int main(void)
// {
//     char str[] = "YOUSSEF HAJJI"; 
//      ft_striteri(str, function);
//      printf("%s", str);
// }
