/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:19:33 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 14:52:00 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < ft_strlen(s1) && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2) && s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
// int	main(void)
// {
// 	char f[] = "hi ";
// 	char j[] = "jood";
// 	char *s = ft_strjoin(f, j);
// 	printf("%s\n", s);
// 	free(s);
// }