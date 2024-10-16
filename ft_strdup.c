/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:41 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 18:07:09 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	k;
	char	*yey;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	yey = (char *)malloc(sizeof(char) * i + 1);
	if (yey == 0)
		return (0);
	while (k < i)
	{
		yey[k] = s1[k];
		k++;
	}
	yey[k] = '\0';
	return (yey);
}
