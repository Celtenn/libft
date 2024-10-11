#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *f;
	size_t	i;

	i = 0;
    f = (unsigned char *)s;
	while(i < n)
	{
		if(f[i] == (unsigned char)c )
			return (f + i);
		i++;
	}
	return (0);
}