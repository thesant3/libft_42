/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:50:39 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/02 08:35:38 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Duplicates the given string using malloc.
**Parameters: const char *s - the string to duplicate
**Returns: a pointer to the duplicated string,
**or Null if memory allocation fails.
*/
char	*ft_strdup(const char *s)
{
	char	*new_string;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	new_string = malloc(len);
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, (char *)s, len);
	return (new_string);
}
