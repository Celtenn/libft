/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 03:00:11 by idkahram          #+#    #+#             */
/*   Updated: 2024/10/19 13:25:35 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	countw(char const *s, char c)
{
	int	i;
	int	wnumber;

	i = 0;
	wnumber = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			wnumber++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
	}
	return (wnumber);
}

char	*creatw(char *daz, char const *s, int first_i, int last_i)
{
	int	i;

	i = 0;
	while (i < last_i)
	{
		daz[i] = s[first_i + i];
		i++;
	}
	daz[i] = '\0';
	return (daz);
}

char	*create_single_word(char const *s, int *index, char c)
{
	int		w_len;
	int		first;
	char	*word;

	w_len = 0;
	first = *index;
	while (s[*index] != c && s[*index])
	{
		w_len++;
		(*index)++;
	}
	word = (char *)malloc(sizeof(char) * (w_len + 1));
	if (!word)
		return (0);
	creatw(word, s, first, w_len);
	return (word);
}

char	**create_word(char **daza, char const *s, char c, int k_len)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i] && k < k_len)
	{
		if (s[i] != c)
		{
			daza[k] = create_single_word(s, &i, c);
			if (!daza[k])
			{
				while (--k > -1)
					free(daza[k]);
				free(daza);
				return (0);
			}
			k++;
		}
		else
			i++;
	}
	daza[k] = NULL;
	return (daza);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k_len;
	char	**str;

	i = 0;
	if (!s)
		return (0);
	k_len = countw(s, c);
	str = (char **)malloc(sizeof(char *) * (k_len + 1));
	if (!str)
		return (0);
	str = create_word(str, s, c, k_len);
	return (str);
}
