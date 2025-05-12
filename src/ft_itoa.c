/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:24:44 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/05/13 00:48:33 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_num_len(int n, char **ptr)
{
        long    n2;
        int     len;

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
          *ptr = calloc(len + 1, 1);
        else
          *ptr = calloc(len + 2, 1);
        return (len);
}

char   *ft_itoa(int n)
{
  char  *str;
  long  num;
  //int   i;
  int   len;
  
  //if (!n)
  //  return (NULL);
  if (n == 0)
      return(strdup("0"));
  len = ft_num_len(n, &cn);
  num = (long)n;
  if (n2 < 0)
  {
    len++;
    num *= -1;
    *str = '-';
  }
  while (n2 > 9)
  {
    //i = (int) (n2 % 10);
    str[len - 1] = (n2 % 10) + '0';
    num /= 10;
    len--;    
  }
  str[len - 1] = n2 + 48;
  return (str); 
  
}
