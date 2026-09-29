/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:47:04 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 22:26:47 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void ft_bzero (void *s, size_t n)
{
	unsigned char *p;

	p = s;
	while(n--)
	{
		*p++ = 0;
	}
}
void *ft_calloc(size_t nmemb,size_t size)
{
  void *ptr;

  

  
  if(nmemb == 0 || size == 0)
  return (malloc(1));
if (nmemb > ((size_t )-1) /size)
return(NULL);

  ptr=malloc(nmemb *size);
  if(ptr == NULL)
  return (NULL);

  ft_bzero(ptr,nmemb * size);


return (ptr);

}