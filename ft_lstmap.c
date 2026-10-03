/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:00:46 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/03 17:27:28 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
t_list  *ft_newlst(void *content)
{
  t_list  *new;

  new = malloc(sizeof(t_list));
  if(new == NULL)
  return(NULL);
new -> content = content;
new -> next = NULL;
return (new);
}
t_list  *ft_lstmap(t_list *lst,void *(*f) (void *), void (*del) (void *))
{
  t_list *first;
  t_list  *last;
  t_list  *new;
  
  if(lst == NULL || f == NULL || del == NULL)
  {
    return (NULL);
  }
  first = NULL;
  last = NULL;
  while (lst!= NULL)
  {
  new = ft_newlst(f(lst->content));
  if( first == NULL)
  first = new;
else
last -> next = new;
last = new;
lst = lst ->next;
  }
  return(first);
}