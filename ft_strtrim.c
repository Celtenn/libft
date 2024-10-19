/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:24:44 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/19 13:00:10 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lookc(char const *lo, char c)
{
	int	i;

	i = 0;
	while (lo[i] != '\0')
	{
		if (lo[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		len;
	char	*str;

	i = 0;
	k = 0;
	len = 0;
	while (s1[i] != '\0')
		i++;
	while (s1[len] && lookc(set, s1[len]))
		len++;
	while (i > len && lookc(set, s1[i - 1]))
		i--;
	str = (char *)malloc(sizeof(char) * (i - len + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (len < i)
	{
		str[k++] = s1[len++];
	}
	str[k] = '\0';
	return (str);
}
