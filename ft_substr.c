/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 09:46:55 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 13:31:36 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
// int	main(void)
// {
// 	char f[] = "farah";
// 	char *j = ft_substr(f, 1, 42000000000);
// 	printf("%s", j);
// 	free(j);
// }