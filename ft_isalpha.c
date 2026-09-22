# include <unistd.h>
int ft_isalpha(int c)
{

		if ((c >= 65 && c <= 90)||
				(c >= 97 && c <= 122))
		       return 1;
		else
		
			return 0;
		
	
}
int main ( int argc, char **argv)
{
	 if(ft_isalpha(argv[1][0])==1)
	 write(1,"YES\n",4);
	 else
		 write (1,"NO\n",3);
	 
	
}

