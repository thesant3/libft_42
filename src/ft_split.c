/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:52:07 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/19 00:10:20 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	count_words(char *ptr, char c, char ***ptp)
{
	int	in_word;
	int	count;
	int	i;

	in_word = 0;
	count = 0;
	i = 0;
	while (ptr[i])
	{
		if (in_word > 0 && ptr[i] == c)
		{
			count++;
			in_word = 0;
		}
		else if (ptr[i] != c)
			in_word++;
		i++;
	}
	if (in_word > 0 && (ptr[i] == '\0'))
		count++;
	*ptp = (char **) malloc((count + 1) * sizeof(char *));
	(*ptp)[count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	int		in_word;
	int		j;

	count_words((char *)s, c, &split);
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
