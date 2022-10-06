/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:23:23 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/18 13:54:41 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}

/*int main()
{
	char b[20] = "guillermo";

	//b = "guillermo";
	printf("%s\n", b);
//	printf("%s\n", memset(b + 3, 49, 1));
	printf("%s\n", ft_memset(b + 3, 49, 1));
	printf("%s\n", b);
	return (0);
}*/
