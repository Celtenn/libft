#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    int i = 0;
    int k = 0;

    if(s1 == 0 || s2 == 0)
        return(NULL);
    while(s1[i] != '\0')
    {
        i++;
    }
    while(s2[k] != '\0')
    {
        k++;
    }
    result = (char *)malloc(sizeof(char) * (i+k+1));
    i = 0;
    while(s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    k = 0;
    while(s2[k] != '\0')
    {
        result[i] = s2[k];
        i++;
        k++;
    }
    result[i] = '\0';
    return(result);
}

int main()
{
    printf("%s \n", ft_strjoin("enes", "lan"));
}