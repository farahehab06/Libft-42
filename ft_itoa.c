/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:02:46 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/03 08:58:47 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>
int numlen(int  n)
{
  int len;

  len = 0;
  if (n <= 0)
  len++;
while(n != 0)
{
  n /= 10;
  len++;
}
return (len);
}
char *ft_itoa(int n)
{
  char  *s;
  int len;
  long  n2;
  
  len = numlen(n);
  s=malloc(len + 1);
  n2 = n;
  if (s== NULL)
  return (NULL);
s[len] = '\0';
if (n == 0)
s[0] = '0';
if (n2 < 0)
{
  s[0] = '-';
  n2 = -n2;
}
while (n2 > 0)
{
  s[--len] = n2 %10 + '0';
  n2 /= 10;
}
  return (s);
  
}
int	main(void)
{
	char	*s;

	s = ft_itoa(1000000000);
	printf("%s\n", s);
	free(s);
}