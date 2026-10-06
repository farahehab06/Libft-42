/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:07:43 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 12:33:14 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
// int	main(void)
// {
// 	//char f[] = "f";
// 	char j[] = "jood";

// 	printf("%s", strchr(j, 'o'));
// 	printf("\n%s", ft_strchr(j, 'o'));
// 	return (0);
// }