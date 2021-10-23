/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:35:24 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 11:35:25 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			ft_lstdelone(current, (del));
			current = next;
		}
		*lst = NULL;
	}
}
