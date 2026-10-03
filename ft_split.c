/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:14:23 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/02 22:56:22 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 
int countwords(char const *s,char c)
{
  int i;
  int words;
  
  i = 0;
  words = 0;
  
  while (s[i] != '\0')
  {
    if (s[i] != c && (i == 0 || s[i - 1] == c) )
  words++;
  i++;
    
  }
  return (words);
}
char **ft_split(char const *s, char c)
{
  char  **array;
  int numOfWords;
  int i;
  int j;
  int start;
  int z;
  int k;
  int f;

   if(s == NULL)
  return (NULL);
  numOfWords = countwords(s,c);
  array= malloc((numOfWords+1)* sizeof(char *));
  if(array == NULL)
  return (NULL);
  i = 0;
  j = 0;
  while(s[i] != '\0' && j < numOfWords)
  {
    while (s[i] == c)
    i++;
  if (s[i] == '\0')
	break;
    start =i;
    z = start;
    k = 0;
    
    while(s[i] != '\0' && s[i] != c)
    {
      i++;
    }
    array[j] = malloc(i - start + 1);
    f = 0;
    if(array[j] == NULL)
    { 
      while (f < j)
      {
        free(array[f]);
        f++;
      }
      free(array);
    return (NULL);
  }
    while(z < i)
    {
      array[j][k]=s[z];
      z++;
      k++;
    }
    array[j][k] = '\0';
    j++;
  }
array[j]= NULL; 
  return (array);
}

int	main(void)
{
	char	**str;
	int		i;

	str = ft_split("abc", '\0');
	if (str == NULL)
	{
		printf("ft_split returned NULL\n");
		return (1);
	}
	i = 0;
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}