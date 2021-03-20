/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:03:16 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/13 18:51:31 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_in_char(int c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (s1[0] == '\0')
		return (ft_substr(s1, 0, 0));
	while (set_in_char(s1[start], set) && s1[start])
		start++;
	end = ft_strlen(s1) - 1;
	while (set_in_char(s1[end], set) && end >= start)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
