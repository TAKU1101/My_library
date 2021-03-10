/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 17:47:42 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/08 17:54:21 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
