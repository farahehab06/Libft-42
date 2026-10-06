/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:19:33 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/01 17:49:34 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	l;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		i++;
		l++;
	}
	return (l);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	j = 0;
	ptr = malloc(s1len + s2len + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < s1len && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < s2len && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
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