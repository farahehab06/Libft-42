/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:46:47 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 13:27:41 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int i;

  i = 0;
  while ( i < n && (s1[i] != '\0' || s2[i] != '\0')  )
  {
    if ((unsigned char )s1[i] != (unsigned char)s2[i])
    {
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    }
    i++;
  
  }
  return (0);

}

int main()
{
  char f[5] ="ab";
  char m[5] = "a";
 printf("%d",ft_strncmp(f,m,5));
    printf("%d",strncmp(f,m,5));
}
