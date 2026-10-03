/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:17:21 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/03 15:26:10 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
void ft_lstadd_front(t_list **lst, t_list *new)
{
  new ->next = *lst;
  *lst = new;
}