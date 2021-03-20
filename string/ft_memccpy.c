/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@students.42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:05:01 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/07 14:32:22 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *srcs, int c, size_t len)
{
	char		*p1;
	const char	*p2;

	p1 = dest;
	p2 = srcs;
	while (len)
	{
		*(unsigned char *)p1 = *(unsigned char *)p2;
		if (*(unsigned char *)p2 == (unsigned char)c)
			break ;
		p1++;
		p2++;
		len--;
	}
	if (len != 0)
		return (++p1);
	else
		return (0);
}
