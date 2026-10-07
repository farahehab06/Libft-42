/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 08:59:53 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 13:22:50 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;
	size_t			len;

	if (!s || !f)
		return ;
	i = 0;
	len = ft_strlen(s);
	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
// char	upper_func(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c - 32);
// 	return (c);
// }
// int	main(void)
// {
// 	char	*result;

// 	result = ft_strmapi("hello", upper_func);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
