/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:09:57 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 18:11:38 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *lo)
{
	int	i;

	i = 0;
	while (lo[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ds;
	size_t	so;
	size_t	i;

	ds = ft_strlen(dst);
	so = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (so);
	if (size <= ds)
		return (size + so);
	while (src[i] != '\0' && ds + i < size - 1)
	{
		dst[ds + i] = src[i];
		i++;
	}
	dst[ds + i] = '\0';
	return (ds + so);
}
