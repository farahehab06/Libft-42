/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:43:43 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 13:29:31 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*ptr;
	size_t	i;

	if (!s1 || !set)
		return ;
	(NULL);
	front = i = 0;
	back = ft_strlen(s1);
	while (s1[front] != '\0' && set_check(s1[front], set))
		front++;
	while (back > front && set_check(s1[back - 1], set))
		back--;
	ptr = malloc(back - front + 1);
	if (ptr == NULL)
		return (NULL);
	while (back > front)
		ptr[i++] = s1[front++];
	ptr[i] = '\0';
	return (ptr);
}
// int	main(void)
// {
// 	char *result;

// 	result = ft_strtrim("farah", "fh");
// 	printf("%s\n", result);
// 	free(result);
// }