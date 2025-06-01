/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:34:19 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/06 15:09:12 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ps;
	unsigned char	*pd;

	ps = (unsigned char *) src;
	pd = (unsigned char *) dest;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (n--)
	{
		*pd++ = *ps++;
	}
	return (dest);
}
