/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:12:34 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 18:14:15 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (size > 0)
	{
		while (src[k] != '\0' && k < (size - 1))
		{
			dst[k] = src[k];
			k++;
		}
		dst[k] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
