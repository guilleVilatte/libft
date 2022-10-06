/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:29:57 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/21 17:33:26 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	*str;

	i = 0;
	ptr = NULL;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			ptr = &str[i];
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (ptr);
}
