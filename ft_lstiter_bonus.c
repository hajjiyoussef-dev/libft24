/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:45:55 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 15:59:02 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
// void function(void * content)
// {
//     printf("%s \n", (char *) content);
// }
// int main(void)
// {
//     char *content1 = ft_strdup("hello1 ");
//     char *content2 = ft_strdup("hello2 ");
//     char *content3 = ft_strdup("hello3 ");
//     char *content4 = ft_strdup("hello4 ");
//     t_list *node1 = ft_lstnew(content1);
//     t_list *node2 = ft_lstnew(content2);
//     t_list *node3 = ft_lstnew(content3);
//     t_list *node4 = ft_lstnew(content4); 
//     node1 ->next = node2;
//     node2 ->next = node3;
//     node3 ->next = node4;
//     ft_lstiter(node1,function);
//     ft_lstclear(&node1,free);
//     //ft_lstiter(node1,function);
//     return (0);    
// }
