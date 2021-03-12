/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@students.42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 20:32:17 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/05 20:54:28 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t len)
{
	unsigned char	*p1;

	p1 = (unsigned char *)buf;
	while (len)
	{
		if (*p1 == (unsigned char)ch)
			return (p1);
		p1++;
		len--;
	}
	return (NULL);
}
