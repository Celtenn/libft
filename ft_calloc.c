#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t i = 0;
	char *b = (char *)malloc(count * size);

    if(b == 0)
        return(0);
	while(i < (count * size))
	{
		b[i] = '\0';
		i++;
	}

    return((void *)b);
}