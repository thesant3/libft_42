/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:52:07 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/16 00:50:21 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	count_words(char *ptr, char c, char **ptp)
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
	*ptp = malloc((count + 1) *  sizeof(char*));
}


char	**ft_split(char const *s, char c)
{
	int	in_word;
	int	ini;
	int	i;
	char	*word;
	char	*split;
	//size_t	len;
	int	j;

	split = NULL;
	count_words((char*)s, c, &split);
	//len = ft_strlen((const char*)split);
	in_word = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (in_word > 0 && s[i] == c)
		{
			word = ft_substr(s, ini, in_word);
			//ft_strlcat(*split, word, len);
			split+j = word;
			free(word);
			in_word = 0;
			j++;
		}
		else if (s[i] != c)
			in_word++;
		if (in_word == 1)
			ini = i;
		i++;
	}
	free(word);
	return (split);
}
