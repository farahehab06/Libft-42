/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:14:23 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/07 14:49:44 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static char	*copy(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_arr(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	*fill(char const *s, char c, int *i)
{
	int	start;

	start = *i;
	while (s[*i] != '\0' && s[*i] != c)
		(*i)++;
	return (copy(s, start, *i));
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	array = malloc((countwords(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		array[j++] = fill(s, c, &i);
		if (!array[j - 1])
			return (free_arr(array, j), NULL);
		
	}
	array[j] = NULL;
	return (array);
}
// int	main(void)
// {
// 	char **str;
// 	int i;

// 	str = ft_split("  hello world -42 ", ' ');
// 	if (str == NULL)
// 	{
// 		printf("ft_split returned NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (str[i] != NULL)
// 	{
// 		printf("%s\n", str[i]);
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }