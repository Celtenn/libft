/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:49:57 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 17:43:38 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tey;
	char	*hey;
	size_t	i;

	tey = (char *)dst;
	hey = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (dst > src)
	{
		while (0 < len)
		{
			tey[len - 1] = hey[len - 1];
			len--;
		}
	}
	else
	{
		while (len-- > 0)
		{
			*tey++ = *hey++;
		}
	}
	return (dst);
}
