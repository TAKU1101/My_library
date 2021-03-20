/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 18:46:35 by tsugita           #+#    #+#             */
/*   Updated: 2020/10/09 10:18:24 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next_lst;

	if (!*lst)
		return ;
	while ((*lst)->next)
	{
		next_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
	ft_lstdelone(*lst, del);
	*lst = 0;
}
