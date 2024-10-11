#include "libft.h"
#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
	size_t i = 0;
	char *b = (char *)s;
	while(i < n)
	{
		b[i] = '\0';
		i++;
	}
}
