/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 22:04:12 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 22:19:26 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include<stdio.h>
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
char  *ft_strdup(const char *s)
{
  char  *ptr;
  size_t  len;
  size_t  i;

  len = ft_strlen(s);
  i = 0;
  ptr = malloc(len + 1);
  if(ptr == NULL)
  return (NULL);
while( i < len )
{
  ptr[i] =s[i];
  i++;
}
ptr[i]= '\0';
return (ptr);
}
int	main(void)
{
	char	*copy;

	copy = ft_strdup(" ");
	if (copy == NULL)
	{
		printf("%s","malloc failed\n");
		return (1);
	}

	
	printf("copy: %s\n", copy);
	printf("og:   %s\n", strdup(" "));

	free(copy);
	return (0);
}