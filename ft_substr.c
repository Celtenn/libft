#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i = 0;
    size_t k = 0;
    char *dizi;

    if(!s)
        return (0);
    while(s[i] != '\0' && i < start)
        i++;
    if  (ft_strlen(s) < start)
        len = 0;
    else if ((ft_strlen(s) < len) || (ft_strlen(s) < start + len))
        len = ft_strlen(s) - start;
    dizi = (char*)malloc(sizeof(char)*len +  1);
    if (!dizi)
        return(NULL);
    while(k < len && s[i+k] != '\0')
    {
        dizi[k] = s[i+k];
        k++;
    }
    dizi[k] = '\0';
    return(dizi);
}