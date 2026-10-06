#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*p;

	p = b;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}

// int	main(void)
// {
// 	char a[10];
// 	char b[10];

// 	ft_memset(a, 'A', 10);
// 	memset(b, 'A', 10);

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d\t", a[i]);
// 		printf("%d\t", b[i]);
// 	}

// 	return (0);
// }