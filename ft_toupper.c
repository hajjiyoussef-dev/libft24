/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:12:19 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 17:35:38 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
// int main()
// {
//     int j = 0;
//     char str[] = "sdfghjkl;s\0dfghjkdfghjk\n";
//     char ch;

//     while (str[j]) {
//         ch = str[j];
//         putchar(ft_toupper(ch));
//         j++;
//     }

//     return 0;
// }
