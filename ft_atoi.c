/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:25:53 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 19:43:46 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

   #include <stdlib.h>
   #include<stdio.h>
   int  parsnum( const char *nptr, int i)
   {
    int num;

    num = 0;
    while(nptr[i] <= '9' && nptr[i] >= '0')
    {
      num = (num * 10) + nptr[i] - '0';
      i++;
    }
    return (num);
   }
 int  ft_atoi(const char *nptr)
{
  int i;

  i = 0;
  while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] ==' ')
  {
    i++;
  }
  if (nptr[i] == '-')
  {
    return(parsnum(nptr,i + 1)*-1);
  }
  else if (nptr[i] == '+')
  {
    return (parsnum(nptr, i + 1));
  }
  else
  return (parsnum(nptr, i));
}
int main()
{
  char m[] ="  +-59";
  printf("%d\n",ft_atoi(m));
  printf("%d",atoi(m));
  
}