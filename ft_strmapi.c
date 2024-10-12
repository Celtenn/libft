#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *tey;
    unsigned int i;

    i = 0;
    if(s == 0)
        return(NULL);
    while(s[i] != '\0')
    {
        i++;
    }
    tey = (char *)malloc(sizeof(char) * (i + 1));
    if(tey == 0)
        return(NULL);
    i = 0;
    while(s[i] != '\0')
    {
        tey[i] = f(i,s[i]);
        i++;
    }
    return(tey);
}