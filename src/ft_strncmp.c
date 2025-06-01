/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:21:40 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/08 18:18:27 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			i;

	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (us2[i] != us1[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}
