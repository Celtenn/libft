#include <stdio.h>
#include <stdlib.h>


int belirleme(char const *lo, char c)
{
    int i = 0;
    while(lo[i] != '\0')
    {
        if (lo[i] == c)
            return(1);
        i++;
    }
    return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i = 0;
    int k = 0;
    int len = 0;
    char *dizi;

    while(s1[i] != '\0')
    {
        i++;
    }
    while (s1[len] && belirleme(set, s1[len]))
    {
        len++;
    }
    while (i > len && belirleme(set, s1[i-1]))
    {
        i--;
    }
    dizi = (char *)malloc(sizeof(char) * (i - len + 1));
    if (!dizi)
        return (NULL);
    k = 0;
    while(len < i)
    {
        dizi[k] = s1[len];
        len++;
        k++;
    }
    dizi[k] = '\0';
    return(dizi);
}