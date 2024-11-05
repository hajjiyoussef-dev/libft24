/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:20:48 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 16:03:25 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
// void *function(void *content)
// {
//     char *str = (char *) content ;
//     char *new_str =  ft_strdup(str);
//     int i = 0;
//     if (!new_str)
//         return(NULL);
//     while (new_str[i])
//     {
//         new_str[i] = ft_tolower(new_str[i]);
//         i++;
//     }
//     return (new_str);
// }
// void del(void *content)
// {
//     free(content);
// }
// int main(void)
// {
//     char *content1 = ft_strdup("HELLO1");
//     char *content2 = ft_strdup("HELLO2");
//      t_list *node1 = ft_lstnew(content1);
//      t_list *node2 = ft_lstnew(content2);
//      //node1 ->next = node2;
//      ft_lstadd_back(&node1,node2);
//     void *fun = *function;
//      t_list *mapped_list = ft_lstmap(node1,fun,del);
//      while (mapped_list)
//      {
//        printf("%s \n", mapped_list->content);
//        mapped_list = mapped_list -> next;
//      }
// }
