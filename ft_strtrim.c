/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 21:23:13 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/12 12:59:50 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_init_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	ft_fin_trim(char const *s1, char const *set)
{
	size_t	j;
	size_t	len;

	len = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[len] == set[j])
		{
			len--;
			j = 0;
		}
		else
			j++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ns;
	size_t	ini;
	size_t	fn;
	size_t	len;

	if (!s1)
		return (NULL);
	ini = ft_init_trim(s1, set);
	fn = ft_fin_trim(s1, set);
	len = 1 + (fn - ini);
	ns = ft_substr(s1, ini, len);
	return (ns);
}
