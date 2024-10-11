#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    size_t i = 0;
    size_t k = 0;
    char *yey;

    while(s1[i] != '\0')
    {
        i++;
    }

    yey = (char*)malloc(sizeof(char)*i+1);

    if(yey == 0)
        return(0);
    
    while(k < i)
    {
        yey[k] = s1[k];
        k++;
    }
    yey[k] = '\0';

    return(yey);
}
