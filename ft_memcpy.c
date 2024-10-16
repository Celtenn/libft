/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:40:51 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 16:48:46 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*yey;
	unsigned char	*tey;

	yey = (unsigned char *)dst;
	tey = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		yey[i] = tey[i];
		i++;
	}
	return (yey);
}
