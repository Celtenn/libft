/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:30:34 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/18 20:35:21 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			k;
	char			*dizi;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && i < start)
		i++;
	if (ft_strlen(s) < start)
		len = 0;
	else if ((ft_strlen(s) < len) || (ft_strlen(s) < start + len))
		len = ft_strlen(s) - start;
	dizi = (char *)malloc(sizeof(char) * (len + 1));
	if (!dizi)
		return (NULL);
	while (k < len && s[i + k] != '\0')
	{
		dizi[k] = s[i + k];
		k++;
	}
	dizi[k] = '\0';
	return (dizi);
}
