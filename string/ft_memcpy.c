/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@students.42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:41:54 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/07 14:23:43 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *srcs, size_t len)
{
	char *p;

	p = dest;
	if (dest == (void *)0 && srcs == (void *)0)
		return (0);
	while (len-- > 0)
	{
		*(char *)(dest++) = *(char *)(srcs++);
	}
	return (p);
}
