void *ft_memset(void *b, int c, size_t n)
{
	unsigned char *p;

	p=b;
	while(n--)
	{
		*p++= (unsigned char )c;
	}
	return b;
}
