/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:26:28 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/03 15:30:15 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

unsigned int  ft_lstsize(t_list *lst)
{
  unsigned int  len;

  len = 0;
  while (lst != NULL)
  {
  len++;
  lst = lst -> next;
  }
return(len);
}