#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (size == 0)
		return (srclen);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

// int	main(void)
// {
// 	char	f[] = "farah";
// 	char	j[] = "jo";

// 	printf("%zu", ft_strlcpy(f, j, 5));
// 	printf("%zu", strlcpy(f, j, 5));
// 	return (0);
// }
