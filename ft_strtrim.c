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
    while(s1[k] != '\0')
    {
        if (!belirleme(set, s1[k]))
            len++;
        k++;
    }
    dizi = (char *)malloc(sizeof(char) * (len + 1));
    k = 0;
    while(s1[i] != '\0')
    {
        if (!belirleme(set, s1[k]))
        {
            dizi[i] = s1[k];
            i++;
        }
        k++;
    }
    dizi[i] = '\0';
    return(dizi);
}
int main()
{
    char dest[] = "efendisiztaht";
    char bul[] = "es";
    printf("%s", ft_strtrim(dest, bul));
}