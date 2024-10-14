#include "libft.h"

int ft_strlen(const char *lo)
{
    int i;

    i = 0;
    while(lo[i] != '\0')
    {
        i++;
    }
    return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t ds;
    size_t so;
    size_t i;

    ds = ft_strlen(dst);
    so = ft_strlen(src);
    i = 0;
    if(size <= ds)
        return (size + so);
    while(src[so] != '\0' && (ds + i) < (size - 1))
    {
        dst[ds + i] = src[i];
        i++;
    }
    dst[ds + i] = '\0';

    return(ds + so);
}
