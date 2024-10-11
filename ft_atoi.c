#include "libft.h"
int jaja(char *dizi,int *k)
{
	int negatif = 1;
	int i = 0;

	while((dizi[i] >= 9 && dizi[i] <= 13) || dizi[i] == 32)
	{
		i += 1;
	}
	if(dizi[i] == 45)
	{
		negatif *= -1;
		i += 1;
	}
	else if(dizi[i] == 43)
		i += 1;
	*k = i;
	return(negatif);
}

int ft_atoi( char *str)
{
	int i = 0;
	char *lan = (char *)str;
	int eksi  = jaja(lan,&i);
	int sonuc = 0;

	while(lan[i] >= 48 && lan[i] <= 57)
	{
		sonuc *= 10;
		sonuc += lan[i] - 48;
		i++;
	}
	sonuc *= eksi;
	return(sonuc);
}
