/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:24:44 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/14 18:52:52 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_len(int n, char **ptr)
{
	long	n2;
	int		len;

	n2 = (long)n;
	if (n2 < 0)
		n2 *= (long)-1;
	len = 1;
	while (n2 > 9)
	{
		n2 /= 10;
		len++;
	}
	if (n > 0)
		*ptr = ft_calloc(len + 1, 1);
	else
		*ptr = ft_calloc(len + 2, 1);
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_num_len(n, &str);
	if (!str)
		return (NULL);
	num = (long)n;
	if (num < 0)
	{
		len++;
		num *= -1;
		*str = '-';
	}
	while (num > 9)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	str[len - 1] = num + 48;
	return (str);
}
