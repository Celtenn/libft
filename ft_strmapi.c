/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:16:44 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/16 18:17:58 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tey;
	unsigned int	i;

	i = 0;
	if (s == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		i++;
	}
	tey = (char *)malloc(sizeof(char) * (i + 1));
	if (tey == 0)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		tey[i] = f(i, s[i]);
		i++;
	}
	tey[i] = '\0';
	return (tey);
}
