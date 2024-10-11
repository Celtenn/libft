#include <stdlib.h>
#include "libft.h"

int	belirleme(long sayi, int *eksi)
{
	int	i;
	int	cizgi;

	i = 0;
	if (sayi < 0)
	{
		cizgi = 1;
		sayi *= -1;
		i++;
	}
	if(sayi == 0)
		i++;
	while (sayi > 0)
	{
		sayi = sayi / 10;
		i++;
	}
	*eksi = cizgi;
	return (i);
}

char	*ft_itoa(int n)
{
	int		fak;
	int		k;
	long	lah;
	char	*dizis;

	lah = n;
	k = belirleme(lah, &fak);
	dizis = (char *) malloc((k + 1) * sizeof(char));

	if (!dizis)
		return (NULL);
	if (fak == 1)
	{
		dizis[0] = '-';
		lah *= -1;
	}
	dizis[k] = '\0';
	while (lah > 0)
	{
		dizis[--k] = (lah % 10) + 48;
		lah /= 10;
	}
	if(n == 0)
		dizis[0] = '0';
	return (dizis);
}
