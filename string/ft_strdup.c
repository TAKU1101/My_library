/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@students.42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 18:43:52 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/06 18:58:57 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *p;
	char *rp;

	p = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	rp = p;
	if (!p)
		return (NULL);
	while (*s1)
	{
		*p = *s1;
		s1++;
		p++;
	}
	*p = '\0';
	return (rp);
}
