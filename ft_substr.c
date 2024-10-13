#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = 0;
    size_t k = 0;
    char *dizi;

    if(!s)
        return (NULL);
    while(s[i] != '\0' && i < start)
    {
        i++;
    }
    dizi = (char*)malloc(sizeof(char)*len + 1);
    if(!dizi)
        return (NULL);
    while(k < len)
    {
        dizi[k] = s[i+k];
        k++;
    }
    dizi[k] = '\0';
    return(dizi);
}
int main()
{
    printf("%s", ft_substr("merhaba", 2, 3));
}