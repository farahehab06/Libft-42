void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dest;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
