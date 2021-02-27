/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiliber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:44:55 by cfiliber          #+#    #+#             */
/*   Updated: 2021/02/25 19:45:11 by cfiliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	sm[len];
	unsigned char	*s2;
	size_t			n;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	n = 0;
	if (!src && !dst)
		return (0);
	while (n < len)
	{
		sm[n] = s1[n];
		n++;
	}
	n = 0;
	while (n < len)
	{
		s2[n] = sm[n];
		n++;
	}
	return (dst);
}
