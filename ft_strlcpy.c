#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t k = 0;

    if(size > 0)
    {
        while(src[k] != '\0' && k < (size - 1))
        {
            dst[k] = src[k];
            k++;
        }
        dst[k] = '\0';
    }
    while (src[i] != '\0')
    {
        i++;
    }
    return(i);
}