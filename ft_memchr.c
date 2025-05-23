/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:03:19 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/08 23:16:44 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	uc;
	size_t			i;

	if (!s && !n)
		return (NULL);
	ps = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ps[i] == uc)
			return ((void *) &ps[i]);
		i++;
	}
	return (NULL);
}
