#include <stdio.h>
#include <stdlib.h>

int count_word(char const *s, char c)
{
    int i;
    int wnumber;

    i = 0;
    wnumber = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            i++;
        }
        else
        {
            wnumber++;
            while (s[i] != c && s[i])
            {
                i++;
            }
        }
    }
    return (wnumber);
}

char    *creatw(char *daz, char const *s, int has, int tas)
{
    int i;

    i = 0;
    while (i < tas)
    {
        daz[i] = s[has + i];
        i++;
    }
    daz[i] = '\0';
    return(daz);
}

char    **create_word(char **daza, char const *s, char c, int k_len)
{
    int i;
    int k;
    int p;
    int t;

    i = 0;
    k = 0;
    while (s[i] && k < k_len)
    {
        if (s[i] != c)
        {
            p = 0;
            t = i;
            while (s[i] != c && s[i])
            {
                p++;
                i++;
            }
            daza[k] = (char *)malloc(sizeof(char) * p + 1);
            if (!daza[k])
                return(0);
            creatw(daza[k], s, t, p);
            k++;
        }
        i++;
    }
    return(daza);
}

char **ft_split(char const *s, char c)
{
    int i;
    int k_len;
    char **dizi;

    i = 0;
    k_len = count_word(s, c);
    dizi = (char **)malloc(sizeof(char *) * k_len + 1);
    if (!dizi)
        return(0);
    create_word(dizi, s, c, k_len);
    return(dizi);
}

int main()
{
    char dizi[] = "ehemmiyet";
    char **diziler;
    int i = 0;

    diziler = ft_split(dizi, 'e');

    while (diziler[i])
    {
        printf("Kelime %d = %s\n", i + 1, diziler[i]);
        i++;
    }
    i = 0;
    while (diziler[i])
    {
        free(diziler[i]);
        i++;
    }
    free(diziler);
}