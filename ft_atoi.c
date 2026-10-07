/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:25:53 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 14:59:14 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	parsnum(const char *nptr, int i)
{
	long	num;

	num = 0;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		num = (num * 10) + nptr[i] - '0';
		i++;
	}
	return (num);
}

int	ft_atoi(const char *nptr)
{
	int	i;

	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		return ((int)parsnum(nptr, i + 1) * -1);
	}
	else if (nptr[i] == '+')
	{
		return ((int)parsnum(nptr, i + 1));
	}
	else
		return ((int)parsnum(nptr, i));
}

// int	main(void)
// {
// 	char m[] = "-2147483648";
// 	printf("my atoi:%d\n", ft_atoi(m));
// 	printf("original:%d", atoi(m));
// }