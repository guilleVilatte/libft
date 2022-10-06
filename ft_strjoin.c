/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:28:26 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/23 12:08:13 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++j])
		str[j] = s1[j];
	while (s2[++i])
		str[j + i] = s2[i];
	str[j + i] = '\0';
	return ((char *)str);
}
