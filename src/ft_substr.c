/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:50:15 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/10 22:55:17 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	//size_t	i;
	char	*sub;
	
	if (!s)
		return (NULL);
	if (!s[0] || !len)
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s+start))
		len = ft_strlen(s+start) + 1;
	len++;
	sub = malloc(len);
	ft_strlcpy(sub, (char *)s+start, len);
	return (sub);

}
