/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:02:34 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 15:01:34 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// int	main(int argc, char **argv)
// {
// 	if (ft_isprint(argv[1][0]) == 1)
// 		write(1, "YES\n", 4);
// 	else
// 		write(1, "NO\n", 3);
// }
