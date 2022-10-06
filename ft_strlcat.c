/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:11:27 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/23 11:53:55 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (dstsize <= i)
		return (j + dstsize);
	k = 0;
	while (src[k] && (i + 1 < dstsize))
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(&src[k]) + i);
}

/*int	main()
{
	unsigned int	size = 3;
	char	dest[] = "hola";
	char	src[] = "que tal";

//	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%lu\n", strlcat(dest, src, size));
//	strlcat(dest, src, size);
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}*/
