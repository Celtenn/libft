/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:28:16 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 16:31:29 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	lenn(long number, int *negative)
{
	int	i;
	int	les;

	i = 0;
	if (number < 0)
	{
		les = 1;
		number *= -1;
		i++;
	}
	if (number == 0)
		i++;
	while (number > 0)
	{
		number = number / 10;
		i++;
	}
	*negative = les;
	return (i);
}

char	*ft_itoa(int n)
{
	int		tt;
	int		k;
	long	heh;
	char	*result;

	heh = n;
	k = lenn(heh, &tt);
	result = (char *) malloc((k + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (tt == 1)
	{
		result[0] = '-';
		heh *= -1;
	}
	result[k] = '\0';
	while (heh > 0)
	{
		result[--k] = (heh % 10) + 48;
		heh /= 10;
	}
	if (n == 0)
		result[0] = '0';
	return (result);
}
