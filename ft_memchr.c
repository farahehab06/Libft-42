/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:42:50 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 12:45:39 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	str[] = "hello world";
// 	char	*result;
// 	char	*og;

// 	result = ft_memchr(str, 'w', 11);
// 	og = memchr(str, 'l', 11);
// 	if (result != NULL)
// 	{
// 		printf("Found: %s\n", result);
// 		printf("Found: %s\n", og);
// 	}
// 	else
// 		printf("Not found\n");
// 	return (0);
// }
