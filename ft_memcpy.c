#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i = 0;
    unsigned char *yey;
    unsigned char *tey;

    yey = (unsigned char *)dst;
    tey = (unsigned char *)src;

    if(dst == NULL && src == NULL)
        return(0);
    while(i < n)
    {
        yey[i] = tey[i];
        i++;
    }
    return(yey);

}