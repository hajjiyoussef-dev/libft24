/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:48:10 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 15:56:15 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*help;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		help = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = help;
	}
	*lst = NULL;
}
// void del(void *content)
// {
//     free(content);
// }
// int main(void)
// {
//     char *content1 = ft_strdup("hello 1");
//     char *content2 = ft_strdup("hello 2");
//     char *content3 = ft_strdup("hello 3");
//     char *content4 = ft_strdup("hello 4");
//     t_list *node1 = ft_lstnew(content1);
//     t_list *node2 = ft_lstnew(content2);
//     t_list *node3 = ft_lstnew(content3);
//     t_list *node4 = ft_lstnew(content4);
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = node4;
//     ft_lstclear(&node1,del);
//     if (node1 == NULL) {
//         printf("List successfully cleared.\n");
//     } else {
//         printf("List not cleared properly.\n");
//     }
//    // printf("{%s}\n" , node3 -> content);
//     return (0);
// }
