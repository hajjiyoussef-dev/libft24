/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:41:47 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/01 23:19:31 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(void)
// {
//     char str[] = "youssef" ;
//     int fd = 1 ;
//     if (fd == 1)
//     {
//         for (size_t i = 0; i < 7; i++)
//         {
//             ft_putchar_fd(str[i], fd);
//         }
//     }
//     return (0);
// }
// #include <fcntl.h>
// int main(void)
// {
//     int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
//     int fd = open("test.txt",O_WRONLY | O_CREAT, 0644);
//     if (fd < 0)
//         return (1);
//     ft_putchar_fd('A', fd); // Writes 'A' to the file output.txt
//     close(fd);
//     return (0);
// }
