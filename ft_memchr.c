/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:32:57 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 16:36:52 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*f;
	size_t			i;

	i = 0;
	f = (unsigned char *)s;
	while (i < n)
	{
		if (f[i] == (unsigned char)c)
			return (f + i);
		i++;
	}
	return (0);
}
