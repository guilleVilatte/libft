/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:17:13 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/21 17:49:05 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*t1;
	const char	*t2;
	size_t		i;

	i = 0;
	t1 = (const char *)s1;
	t2 = (const char *)s2;
	if (n == 0)
		return (0);
	while (t1[i] == t2[i] && i < (n - 1))
		i++;
	return ((unsigned char)t1[i] - (unsigned char)t2[i]);
}
