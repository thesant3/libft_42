/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 21:23:13 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/11 23:59:57 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//pasos de resolución
//saber la longitud del string a recortar
//saber cuanta memoria reservar
//saber determinar cuando inicia y termina una palabra
//recorrer el string, comparar los primeros caracteres de la cadena con los del set para eleminarlos
	//idea leer desde el inicio para determinar si hay caracteres y partir de que indice ya no existen, sería lo mismo desde el final
//realizar el proceso invertido

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	in;
	size_t	fi;
	char	*ns;
	
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
			i++;
			j = 0;
		else
			j++;
	}
	in = i;
	i = -1;
	while (set[len])
        {
                if (s1[i] == set[j])
                        i--;
                        j = 0;
                else
                        j++;
        }
	fi = i
	len2 = (len - in) + (len - fi);
	ns = calloc(len2, 1);
	ns = ft_substr(s1, in, len2);







}
