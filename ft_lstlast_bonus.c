/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:13:31 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 16:00:20 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main(void)
// {
//     t_list *value1  = ft_lstnew("node 1");
//     t_list *value2  = ft_lstnew("node 2");
//     t_list *value3  = ft_lstnew("node 3");
//     t_list *value4  = ft_lstnew("node 4");
//     t_list *value5  = ft_lstnew("node 5");   
//     value1 ->next = value2 ;
//     value2 ->next = value3 ;
//     value3 ->next = value4 ;
//     value4 ->next = value5 ;
//     t_list *last_node = ft_lstlast(value1);
//     if (last_node != NULL)
//         printf("%s", (char *)last_node -> content);
//     free(value1);
//     free(value2);
//     free(value3);
//     free(value4);
//     free(value5);
// }
