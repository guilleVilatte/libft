/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:01:23 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/18 13:48:40 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}

/*int main()
{
    unsigned char str[200] = "guille";

	//write(1, &bzero(str, 2), 3);
	//write(1, &ft_bzero(str, 2), 3);
    //printf("%s", bzero(str, 2));
	ft_bzero(str, 2);
	printf("%s", str);
    return (0);
}*/
