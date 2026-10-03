/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:08:35 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/03 16:15:03 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
void  ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list  *tmp;

  tmp = *lst;
  if(*lst == NULL)
  {
    lst -> next = new;
    return ;
  }
  
     while (tmp -> next != NULL)
  {
  tmp = tmp -> next;
  }
  tmp -> next = new;
}