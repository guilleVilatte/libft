/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:43:30 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/26 17:07:26 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lookingc(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (c == s[i])
			i++;
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static void	forfree(char **str, size_t i)
{
	size_t	k;

	k = 0;
	while (k < i)
	{
		free(str[k]);
		k++;
	}
	free(str);
}

static char	**makewords(char **str, char const *s, char c, size_t k)
{
	size_t	start;
	size_t	i;

	i = 0;
	while (i < lookingc(s, c))
	{
		if (c == s[k])
			k++;
		else
		{
			start = k;
			while (s[k] && s[k] != c)
				k++;
			str[i] = ft_substr(s, start, (k - start));
			if (!str[i])
			{
				forfree(str, i);
				return (NULL);
			}
			i++;
		}
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	k;
	char	**str;

	str = (char **) malloc ((lookingc(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	k = 0;
	str = makewords(str, s, c, k);
	if (!str)
		return (NULL);
	return (str);
}
