#include<unistd.h>
int ft_isdigit (int d)
{
	
		if (d >= 48 && d <= 57)
			return 1;
		else
		
			return 0;
	

}
int main (int argc,char **argv)
{
	if(ft_isdigit(argv[1][0]) == 1)
		write(1,"YES\n",4);
	else
		write(1,"NO\n",3);
}


