/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:19:54 by lgerim            #+#    #+#             */
/*   Updated: 2021/03/26 17:20:00 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*srctmp;
	unsigned char	*dsttmp;

	i = 0;
	srctmp = (unsigned char *)src;
	dsttmp = (unsigned char *)dst;
	while (n--)
	{
		dsttmp[i] = srctmp[i];
		if (srctmp[i] == (unsigned char)c)
			return (dsttmp + i + 1);
		i++;
	}
	return (NULL);
}
