#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
    unsigned char *teh;
    unsigned char *peh;

    teh = (unsigned char *) s1;
    peh = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (teh[i] != peh[i])
		{
			return (teh[i] - peh[i]);
		}
		i++;
	}
	return (0);
}