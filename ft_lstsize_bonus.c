/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 20:30:03 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/21 21:19:48 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*tms;

	len = 0;
	tms = lst;
	while (tms)
	{
		len++;
		tms = tms->next;
	}
	return (len);
}
