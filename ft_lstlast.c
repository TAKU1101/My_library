/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 17:55:34 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/08 18:01:19 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *lst_i;

	if (!lst)
		return (lst);
	lst_i = lst;
	while (lst_i->next)
	{
		lst_i = lst_i->next;
	}
	return (lst_i);
}
