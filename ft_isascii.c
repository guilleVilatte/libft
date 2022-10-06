/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:05:23 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/18 13:49:43 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c < 128))
		return (1);
	else
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_isascii(000));
	printf("%d\n", isascii(000));
	return (0);
}*/
