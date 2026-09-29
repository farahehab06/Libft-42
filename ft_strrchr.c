/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:36:28 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 12:45:20 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
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
char *ft_strrchr(const char *s,int c)
{
    int i;

  i = strlen(s)  ;
  while ( i >= 0 )
  {
    if (s[i] == c)
    {
      return ( (char*)&s[i]);
    }
    i--;
  }
  
  
  return (NULL);
}
int main(){
char	f[] = "f";
	char	j[] = "jood";

    printf("%s",strrchr(j,'l')); 
    printf("%s",ft_strrchr(j,'l'));
    return (0);
    
    
    
    

}