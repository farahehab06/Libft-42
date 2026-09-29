/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:23:36 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 19:12:42 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr (const char *big, const char *small, size_t len)
{
  size_t  i;
  size_t  j;

  i = 0;
  if (small[0] == '\0')
  {
    return ((char *) big);
  }
  while ( i < len && big[i] != '\0')
  {
    j = 0;
    while (i + j < len && big[j + i] != '\0' && small[j]!= '\0' )
    {
      if(big[i+j]==small[j])
      {
        j++;
      }
      else
      break;
    }
    if(small[j] == '\0')
    {
    return((char *)&big[i]);
    }
  i++;
    
  }
  return(NULL);
}