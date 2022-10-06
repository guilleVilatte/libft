/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:59:10 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/21 12:17:52 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	j;

	j = 0;
	i = 0;
	number = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = str[i] - 48 + (number * 10);
		if (str[i + 1] < 48 || str[i + 1] > 57)
			break ;
		i++;
	}
	if (j == 1)
		number = -number;
	return (number);
}
