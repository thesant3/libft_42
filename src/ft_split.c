/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:52:07 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/20 00:56:34 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memarr(char *ptr, char c, char ***ptp)
{
	int	in_word;
	int	count;
	int	i;

	in_word = 0;
	count = 0;
	i = 0;
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
	(*ptp)[count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	int		in_word;
	int		j;
	
	if (!s)
		return (NULL);
	ft_memarr((char *)s, c, &split);
	if (!split)
		return (NULL);
	in_word = 0;
	i = 0;
	j = 0;
	while (ft_strlen(s) >= i)
	{
		if ((in_word > 0 && s[i] == c) || (in_word > 0 && !s[i]))
		{
			split[j++] = ft_substr(s, i - in_word, in_word);
			in_word = 0;
		}
		else if (s[i] != c)
			in_word++;
		i++;
	}
	return (split);
}
