/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:17:27 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/21 12:32:29 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	a = dst;
	b = src;
	i = 0;
	if (dst == src)
		return (0);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}

/*int	main()
{
	char	str1[20] = "";
	char	str2[20] = "";

	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), 3));
//	printf("%s\n", memcpy(((void *)0), ((void *)0), 3));
	return (0);
}*/
