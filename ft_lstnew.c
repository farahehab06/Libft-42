/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:33:21 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 12:52:16 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	int text;
// 	t_list *node;

// 	text = 44;
// 	node = ft_lstnew(&text);

// 	if (!node)
// 		return (1);

// 	printf("content: %d\n", *(int *)node->content);
// 	if (node->next == NULL)
// 		printf("next is NULL\n");
// 	free(node);
// 	return (0);
// }