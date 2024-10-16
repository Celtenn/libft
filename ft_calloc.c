/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:06:54 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 17:35:45 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)malloc(count * size);
	if (b == 0)
		return (0);
	while (i < (count * size))
	{
		b[i] = '\0';
		i++;
	}
	return ((void *)b);
}
