/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:49:06 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/13 18:46:46 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(const char *str)
{
	int i;

	i = 0;
	while (ft_isdigit(*(str++)))
	{
		i++;
	}
	return (i);
}

static	int	detection_overflow(const char *str, char ov[])
{
	int		len;

	len = num_len(str);
	if (len > 19)
		return (1);
	if (len < 19)
		return (0);
	if (ft_strncmp(ov, str, 19) >= 0)
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	long	ans;
	long	sign;

	ans = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || \
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	if (sign < 0 && detection_overflow(str, "9223372036854775808"))
		return (0);
	else if (sign >= 0 && detection_overflow(str, "9223372036854775807"))
		return (-1);
	while ('0' <= *str && *str <= '9')
	{
		ans *= 10;
		ans += *str - '0';
		str++;
	}
	return (ans * sign);
}
