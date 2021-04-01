/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:00:27 by lgerim            #+#    #+#             */
/*   Updated: 2021/03/26 03:00:36 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		chr;
	const unsigned char	*str;

	str = s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*str == chr)
			return ((void *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((void *)str);
	return (NULL);
}
