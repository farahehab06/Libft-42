#include <unistd.h>

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
