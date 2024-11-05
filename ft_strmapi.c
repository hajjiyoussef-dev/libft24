/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:01:59 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 16:52:12 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*string;
	size_t			len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	string = (char *)malloc(len + 1);
	if (!string)
		return (0);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[len] = '\0';
	return (string);
}
// char function(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//     {
//        return(ft_toupper(c));
//     }
//     else 
//     {
//        return(ft_tolower(c));
//     }
// }
// int main(void)
// {
//     char s[] = "hello youssef" ;
//     char *res = ft_strmapi(s,function);
//     printf("%s", res);
//     return (0);
// }
