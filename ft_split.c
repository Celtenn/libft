#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int countw(char const *s, char c)
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

char    *creatw(char *daz, char const *s, int first_i, int last_i)
{
    int i;

    i = 0;
    while (i < last_i)
    {
        daz[i] = s[first_i + i];
        i++;
    }
    daz[i] = '\0';
    return(daz);
}

char    **create_word(char **daza, char const *s, char c, int k_len)
{
    int i;
    int k;
    int w_len;
    int first;

    i = 0;
    k = 0;
    while (s[i] && k < k_len)
    {
        if (s[i] != c)
        {
            w_len = 0;
            first = i;
            while (s[i] != c && s[i])
            {
                w_len++;
                i++;
            }
            daza[k] = (char *)malloc(sizeof(char) * (w_len + 1));
            if (!daza[k])
            {
                while(k > -1)
                {
                    free(daza[k]);
                    k--;
                }
                free(daza);
                return(0);
            }
            creatw(daza[k], s, first, w_len);
            k++;
        }
        else
            i++;
    }
    daza[k] = NULL;
    return(daza);
}

char **ft_split(char const *s, char c)
{
    int i;
    int k_len;
    char **dizi;

    i = 0;
    if (!s)
        return(0);
    k_len = countw(s, c);
    dizi = (char **)malloc(sizeof(char *) * (k_len + 1));
    if (!dizi)
        return(0);
    dizi = create_word(dizi, s, c, k_len);
    return(dizi);
}
