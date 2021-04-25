/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:14:35 by lgerim            #+#    #+#             */
/*   Updated: 2021/03/26 03:14:46 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	len;

	if (!dst || !src)
		return (0);
	n = ft_strlen(src);
	if (size)
	{
		if (n >= size)
			len = size - 1;
		else
			len = n;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (n);
}
