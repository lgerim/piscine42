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
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
		{
			(((unsigned char *)dst)[i] = ((unsigned char *)src)[i]);
			return (&(((unsigned char *)dst)[i + 1]));
		}	
		(((unsigned char *)dst)[i] = ((unsigned char *)src)[i]);
		i++;
	}
	return (NULL);
}
