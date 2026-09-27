void *ft_mmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	 const unsigned char *s;

	d=  dest;
	s= src;

	if(dest <src)
		while(n--)
		{
			*d++=*s++;
		}
	else
		while(n>0)
		{
			n--;
			d[n]=s[n];
			
		}
	return dest;
}

			
