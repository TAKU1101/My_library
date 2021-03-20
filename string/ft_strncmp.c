/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@students.42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:28:02 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/07 15:17:30 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n)
	{
		if (*str1 != *str2 || !*str1 || !*str2)
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
