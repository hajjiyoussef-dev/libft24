/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:17:17 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 17:39:40 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}
// int main(void)
// {
//     int value1 = 10;
//     int value2 = 20;
//     int value3 = 30; 
//     t_list  *head = ft_lstnew(&value1);
//     *(int *) head -> content = 20;
//     t_list *second = ft_lstnew(&value2);
//     *(int *) second -> content = 30;
//              head -> next = second; 
//     t_list  *new_node = ft_lstnew(&value3);
//         *(int *) new_node -> content = 10;
//     ft_lstadd_front(&head , new_node);
//     t_list *current = head ;
//     while (current)
//     {
//         printf("%d -> ", *(int *)current -> content);
//         current = current ->next; 
//     }
//     printf("NULL\n");          
// }
