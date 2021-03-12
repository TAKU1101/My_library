/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 10:28:28 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/08 13:12:57 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	tail;
	char	head;
	char	mask1;
	char	mask2;

	if ((unsigned char)c <= 0x7F)
		write(fd, &c, 1);
	else
	{
		mask1 = 0b00111111;
		mask2 = 0b11000000;
		head = (((unsigned char)c & mask2) >> 6) | mask2;
		tail = ((unsigned char)c & mask1) | 0b10000000;
		write(fd, &head, 1);
		write(fd, &tail, 1);
	}
}
