/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiliber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:37:05 by cfiliber          #+#    #+#             */
/*   Updated: 2021/02/25 19:37:32 by cfiliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_digits(int n)
{
	int		digits;

	digits = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

static char		*ft_alloc(int digits)
{
	char	*str;

	str = malloc(sizeof(char) * (digits + 1));
	if (!(malloc(sizeof(char) * (digits + 1))))
		return (0);
	return (str);
}

static char		*ft_putchars_in_str(char *str, int n, int digits, int sign)
{
	if (n == 0)
		str[0] = 48;
	if (sign == -1)
		str[0] = '-';
	str[digits] = '\0';
	while (n != 0)
	{
		if (n == -2147483648)
		{
			str[digits - 1] = '8';
			n /= 10;
			digits--;
		}
		str[digits - 1] = (n * sign) % 10 + 48;
		n = n / 10;
		digits--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		sign;

	digits = ft_count_digits(n);
	sign = 1;
	if (n < 0)
	{
		digits++;
		sign = -1;
	}
	str = ft_alloc(digits);
	str = ft_putchars_in_str(str, n, digits, sign);
	return (str);
}
