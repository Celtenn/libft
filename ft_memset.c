#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *heh;

    heh = (unsigned char *)b;

    i = 0;

    while(i < len)
    {
        heh[i] = c;
        i++;
    }
    return(heh);
}
