/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:34:47 by gvilatte          #+#    #+#             */
/*   Updated: 2022/09/24 17:57:04 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		i++;
		n = -n;
	}
	else if (n == 0 || (n > 0 && n <= 9))
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*especial_case(int n, char *s)
{
	int	i;

	if (!s)
		return (NULL);
	s[0] = '-';
	s[11] = '\0';
	i = 11;
	while (--i > 0)
	{
		s[i] = (n % 10) + 48 - (n % 10) * 2;
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = ft_nlen(n);
	s = (char *)malloc((i +1) * sizeof(char));
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (n == -2147483648)
		return (especial_case(n, s));
	i--;
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (n == 0)
		s[i] = 48;
	while (n != 0)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}

/*int main()
{
	int	i;

	i = 0;
	printf("%s\n", ft_itoa(i));
	return (0);
}*/
