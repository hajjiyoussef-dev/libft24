/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:01:59 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/31 19:34:45 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t len;
    unsigned int i;
    char *string;
    
    i = 0;
    if (!s || !f)
    return (NULL);
    
   
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
char function(unsigned int i, char c)
{
    if (i % 2 == 0)
    {
       return(ft_toupper(c));
    }
    else 
    {
       return(ft_tolower(c));
    }
}
int main(void)
{
    char s[] = "hello youssef" ;
    char *res = ft_strmapi(s,function);

    printf("%s", res);
    return (0);
}