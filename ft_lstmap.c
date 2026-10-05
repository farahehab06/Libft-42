/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:00:46 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/05 19:42:16 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

t_list  *ft_lstmap(t_list *lst,void *(*f) (void *), void (*del) (void *))
{
  t_list *first;
  t_list  *new;
  void  *content;
  
  if(lst == NULL || f == NULL || del == NULL)
    return (NULL);
  first = NULL;
  while (lst!= NULL)
  {
    	content = f(lst->content);
  new = ft_lstnew(content);
  if (!new)
{
	del(content);
	ft_lstclear(&first, del);
	return (NULL);
}
	ft_lstadd_back(&first, new);
lst = lst ->next;
  }
  return(first);
}