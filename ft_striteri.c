/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 09:11:01 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/03 09:28:24 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>


void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
  unsigned int  i;

  i = 0;
  while(s[i] !='\0')
  {
    f(i,&s[i]);
    i++;
  }
}
void	upper_func(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c=*c-32;

}
int main()
{
char  s[]="farah";
	 ft_striteri(s, upper_func);
	printf("%s\n", s);
  return(0);
}
  