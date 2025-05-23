/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:50:39 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/10 19:19:26 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	void	*ptr;

	n = ft_strlen(s) + 1;
	ptr = malloc(n);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (char *)s, n);
	return (ptr);
}
