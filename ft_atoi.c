/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:16:37 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 16:05:31 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	jaja(const char *hel, int *k)
{
	int	negative;
	int	i;

	i = 0;
	negative = 1;
	while ((hel[i] >= 9 && hel[i] <= 13) || hel[i] == 32)
	{
		i += 1;
	}
	if (hel[i] == 45)
	{
		negative *= -1;
		i += 1;
	}
	else if (hel[i] == 43)
		i += 1;
	*k = i;
	return (negative);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	result = 0;
	neg = jaja(str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= neg;
	return (result);
}
