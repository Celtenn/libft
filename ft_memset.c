/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:45:15 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/23 11:04:39 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*heh;

	heh = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		heh[i] = c;
		i++;
	}
	return (heh);
}
