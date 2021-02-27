/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiliber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:59:30 by cfiliber          #+#    #+#             */
/*   Updated: 2021/02/25 19:59:47 by cfiliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	tot_size;
	size_t	i;

	tot_size = sizeof(char const) * (len + 1);
	s2 = malloc(tot_size);
	if (!(s2 = malloc(tot_size)))
		return (0);
	i = start;
	while (i < (len + start) && s[i] != '\0')
	{
		s2[i - start] = s[i];
		i++;
	}
	s2[i - start] = '\0';
	return (s2);
}
