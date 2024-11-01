/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:43:05 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/29 23:07:48 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_strcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size > 0)
    {
        while (i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *string;
    size_t len_s1;
    size_t len_s2;

    if (!s1 || !s2)
        return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    (string = (char *) malloc((len_s1 + len_s2 + 1) * sizeof(char)));
    if (!string)
        return  NULL;
    ft_strcpy(string, s1, len_s1 + 1);
    ft_strcpy(string + len_s1, s2, len_s2 + 1);
    return (string);
}


// int main(void)
// {
//     char s1[] = "youssef wertyuisdfghjsvbnfghvjdfbvjdfbvjdbfvjdfnbjdhfbvmndbfvjd" ;
//     char s2[] =  "" ;
//     char *string = ft_strjoin(s1,s2);
//     printf("%s",string);
// }