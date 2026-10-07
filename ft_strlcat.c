/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:51:48 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 12:44:41 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	deslen;
	size_t	i;

	srclen = 0;
	deslen = 0;
	i = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (deslen < size && dst[deslen] != '\0')
		deslen++;
	if (deslen == size)
		return (size + srclen);
	while (i + deslen < size - 1 && src[i] != '\0')
	{
		dst[deslen + i] = src[i];
		i++;
	}
	dst[deslen + i] = '\0';
	return (deslen + srclen);
}

// int	main(void)
// {
// 	char f[] = "f";
// 	char j[] = "";

// 	printf("%zu", strlcat(j, f, 1));
// 	printf("%zu", ft_strlcat(j, f, 1));
// 	return (0);
// }