/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:52:07 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/23 20:05:06 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_memarr(char *ptr, char c, char ***ptp)
{
	int	in_word;
	int	count;
	int	i;

	in_word = 0;
	count = 0;
	i = 0;
	if (!ptr)
		return (NULL);
	while (ptr[i])
	{
		if (ptr[i] != c && in_word == 0)
		{
			count++;
			in_word++;
		}
		else if (ptr[i] == c)
			in_word = 0;
		i++;
	}
	*ptp = (char **) malloc((count + 1) * sizeof(char *));
	if (!*ptp)
		return (NULL);
	(*ptp)[count] = NULL;
	return (&*(*ptp));
}

static char	**free_arr(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	int		in_word;
	int		j;

	split = ft_memarr((char *)s, c, &split);
	if (!split)
		return (NULL);
	in_word = 0;
	i = 0;
	j = 0;
	while (s && (ft_strlen(s)) >= i)
	{
		if ((in_word > 0 && s[i] == c) || (in_word > 0 && !s[i]))
		{
			split[j++] = ft_substr(s, i - in_word, in_word);
			if (!split)
				return (free_arr(split));
			in_word = 0;
		}
		else if (s[i] != c)
			in_word++;
		i++;
	}
	return (split);
}
