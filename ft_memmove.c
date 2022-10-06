/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:24:37 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/21 15:51:51 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*a;
	const char	*b;
	size_t		i;

	a = (char *)dst;
	b = (const char *)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (a > b)
	{
		while (i < len)
		{
			a[len -1 - i] = b[len -1 - i];
			i++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
