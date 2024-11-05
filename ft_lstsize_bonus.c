/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:48:42 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/05 16:06:06 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
// int main(void)
// {
//     t_list *value1 = ft_lstnew("node 1");
//     t_list *value2 = ft_lstnew("node 2");
//     t_list *value3 = ft_lstnew("node 3");
//     t_list *value4 = ft_lstnew("node 4");
//     t_list *value5 = ft_lstnew("node 5");
//     value1 -> next = value2;
//     value2 -> next = value3;
//     value3 -> next = value4;
//     value4 -> next = value5;
//     int size = ft_lstsize(value1);
//     printf("%d", size);
//     free(value1);
//     free(value2);
//     free(value3);
//     free(value4);
//     free(value5);
//     return (0);
// }
