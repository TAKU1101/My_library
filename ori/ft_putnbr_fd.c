/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:23:08 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/13 18:51:17 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_num(long num, int fd)
{
	int n;

	n = num % 10;
	if (num)
	{
		put_num(num / 10, fd);
		ft_putchar_fd('0' + n, fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	long	long_n;

	long_n = n;
	if (long_n == 0)
		ft_putchar_fd('0', fd);
	if (long_n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n = long_n * -1;
	}
	put_num(long_n, fd);
}
