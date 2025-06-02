/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:28:08 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/02 10:06:28 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned char	*p;
	int				num;
	int				sign;

	num = 0;
	sign = 1;
	p = (unsigned char *)nptr;
	while (*p == ' ' || (*p >= 9 && *p <= 13))
		p++;
	if (*p == '+' )
	{
		sign = 1;
		p++;
	}
	else if (*p == '-' )
	{
		sign = -1;
		p++;
	}
	while (ft_isdigit(*p))
	{
		num = (num * 10) + (*p - 48);
		p++;
	}
	return (num * sign);
}
