#include <stdio.h>

size_t ft_strlen( const char *s)
{
	int i ;
	size_t length;

	 i= 0;
	 length = 0;
	 while (s[i] != '\0')
	 {
		 i++;
		 length++;
	 }
	 return length;
}
int main(int argc, char **argv)
{
	printf("%zu\n",ft_strlen(argv[1]));
			}



