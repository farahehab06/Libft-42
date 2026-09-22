#include<unistd.h>
int ft_isalnum(int c)
{
	if((c >='a' && c <= 'z') 
			|| (c>='A' && c <= 'Z'
				|| ( c>='0' && c <= '9')))
			return 1;
			
			else 
			return 0;
}
int main(int argc, char **argv)
{
if(ft_isalnum(argv[1][0])==1)
write(1,"YES\n",4);
else
write(1,"NO\n",3);
}
