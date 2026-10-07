/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:00:46 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 14:52:57 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	first = NULL;
	while (lst != NULL)
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
		lst = lst->next;
	}
	return (first);
}
// #include <stdio.h>

// int	main(void)
// {
// 	t_list *node;
// 	t_list *lst = NULL;
// 	int i;
// 	i = 3;
// 	node = ft_lstnew(&i);
// 	ft_lstadd_front(&lst, node);
// 	if (lst == node)
// 	{
// 		printf("same address. lst now points to new\n");
// 	}
