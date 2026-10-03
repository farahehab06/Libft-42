/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:27:22 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/03 16:38:47 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
void  ft_lstdelone(t_list *lst, void (*del) (void *))
{
  if(lst == NULL || del == NULL)
  return;
  del(lst -> content);
  free(lst);
  
}