/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:38:29 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/07 18:43:18 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!src || !dest)
		return (NULL);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = 1;
		while (i <= n)
		{
			((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
