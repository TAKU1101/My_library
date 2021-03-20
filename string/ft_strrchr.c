/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:50:39 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/07 15:02:26 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char *p;

	p = str;
	while (*p)
		p++;
	while (p >= str)
	{
		if (*p == (char)c)
			return ((char *)p);
		p--;
	}
	return (0);
}
