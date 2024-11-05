/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:59:39 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 15:49:20 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}
// int main(void)
// {
//     t_list *head = ft_lstnew("first node ");
//     t_list *node2 = ft_lstnew("second node");
//    // t_list *node3 = ft_lstnew("third node "); 
//     ft_lstadd_back(&head , node2);
//    // ft_lstadd_back(&head , node3);
//     t_list *the_final_lst = head ; 
//     while (the_final_lst != NULL)
//     {
//         printf("%s ", (char *) the_final_lst -> content); 
//         the_final_lst = the_final_lst -> next ;
//     }
//     free(head);
//     free(node2);
//    // free(node3);
//     return (0);
// }
