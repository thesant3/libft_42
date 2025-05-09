/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:07:43 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/07 14:01:20 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	slen;
	unsigned int	dlen;

	i = 0;
	slen = ft_strlen((char *)src);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	while ((dlen + i + 1) < size && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}
