/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 09:46:55 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/30 10:43:13 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	l;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		i++;
		l++;
	}
	return (l);
}
char *ft_substr(char const *s, unsigned int start,size_t len)
{
  char *ptr;
  size_t  i;
  
   i = 0;
   if(start >= ft_strlen(s))
   {
  ptr=malloc(1);
  if(ptr == NULL)
  return (NULL);
ptr[0] = '\0';
return (ptr);
  
}
  ptr=malloc(len + 1);
  if(ptr == NULL)
  return (NULL);
while(s[start] !='\0' && i < len)
{
  ptr[i]=s[start];
  start++;
  i++;
}
ptr[i] = '\0';
return (ptr);
}
int main()
{
  char  f[]="farah";
  char *j=ft_substr(f,1,3);
  printf("%s", j);
  free(j);
}