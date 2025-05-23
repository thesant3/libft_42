/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:56:44 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/24 00:47:24 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		*lst = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = *lst;
	}
}
