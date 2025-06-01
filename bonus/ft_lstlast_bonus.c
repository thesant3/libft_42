/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:20:33 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/21 21:53:29 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;
	size_t	len;
	t_list	*tmp;

	i = 1;
	len = (size_t)ft_lstsize(lst);
	tmp = lst;
	while (len > i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
