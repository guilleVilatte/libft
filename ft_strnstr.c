/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:46:56 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/21 11:56:08 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		if (haystack[i] == needle[k])
		{
			while (needle[k] != '\0' && (i + k) < len)
			{
				if (haystack[i + k] != needle[k])
					break ;
				k++;
			}
			if (needle[k] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char	str[] = "MZIRIBMZIRIBMZE123";
	char	to_find[] = "MZIRIBMZE";

	printf("%s\n", ft_strnstr(str, to_find, 9));
	printf("%s\n", strnstr(str, to_find, 9));
	return (0);
}*/
