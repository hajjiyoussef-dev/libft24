/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:27:15 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 15:57:28 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
// void del(void *content)
// {
//     free(content);
// }
// int main(void)
// {
//     char *content1  = ft_strdup("hello 1");
//     char *content2  = ft_strdup("hello 2");
//     t_list *node1 = ft_lstnew(content1);
//     t_list *node2 = ft_lstnew(content2);
//     ft_lstdelone(node2,del);
//     printf("{%s}\n" , node1->content);
//     printf("{%s}\n" , node2->content);
//     return (0);
//     // int *content = malloc(sizeof(int));
//     // *content = 42;
//     // t_list *node = ft_lstnew(content);
//     // // Delete the node using ft_lstdelone
//     // ft_lstdelone(node, del);
//     // printf("%s" , (char *) node ->content);
//     // return 0;
// }
