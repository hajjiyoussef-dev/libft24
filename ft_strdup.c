/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:59:18 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/02 00:03:20 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     if ( argc == 2)
//     {
//         char *res = ft_strdup(argv[1]);
//         char *res2 = strdup(argv[1]);
//         printf(":%s:\n",res);
//         printf(":%s:\n",res2);  
//     }
//     return 0;
// }
// int main(void)
// {
//     char s1[] = "hello youssef hajji" ;
//   char *res = ft_strdup(s1);
//     char *res2 = strdup(s1);
//     printf(":test;%s:\n",res);
//     printf(":test;%s:\n",res2);
//     return (0);
// }
