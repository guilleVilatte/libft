/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:25:28 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/18 13:54:15 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_isprint(0176));
	printf("%d\n", isprint(0176));
	return (0);
}*/
