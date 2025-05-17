/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:52:07 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:56 by sgomez-m         ###   ########.fr       */
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
	*ptp = (char**)malloc((count + 1) *  sizeof(char*));
	(*ptp)[count] = NULL;
}


char	**ft_split(char const *s, char c)
{
	int	in_word;
	int	ini;
	int	i;
	//char	*word;
	char	**split;
	//size_t	len;
	int	j;

	split = NULL;
	count_words((char*)s, c, &split);
	//len = ft_strlen((const char*)split);
	in_word = 0;
	i = 0;
	j = 0;
	//char *a;
	while (s[i])
	{
		if (in_word > 0 && s[i] == c)
		
		{
			//word = ft_substr(s, ini, in_word);
			//ft_strlcat(*split, word, len);
			//a = ft_substr(s, ini, in_word);
			split[j] = ft_substr(s, ini, in_word);
			printf("%s -- ",split[j]);
			
			//free(word);
			in_word = 0;
			j++;
		}
		else if (s[i] != c)
			in_word++;
		if (in_word == 1)
			ini = i;
		i++;
	}
	split[j] = ft_substr(s, ini, in_word);

	//free(word);
	return (split);
}
/*
int main() {
  char a[] = "Hola Mun   do Mundial   d  los o";
  char **b;
  b = ft_split(a, ' ');
  printf("%s\n",a);
  int j = 0;
  char *k;
  while (j < 7)
  {
  	k = (char *)b[j];
	printf("%s",k);
	j++;
  
  }
  //printf("%lu",b);
  return 0;
}*/
