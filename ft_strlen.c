/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:29:22 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/23 13:39:40 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%zu\n",ft_strlen(argv[1]));
	}
}*/
