/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:03:44 by yhajji            #+#    #+#             */
/*   Updated: 2024/10/30 18:51:40 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc/malloc.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return ((void *)ptr);
}
// int main()
// {
// 	printf("%zu\n", malloc_size(ft_calloc(0, 100)));
// 	printf("%zu\n", malloc_size(calloc(0, 100)));
// 	printf("%zu\n", malloc_size(malloc(0)));
// }
