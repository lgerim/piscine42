/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:07:05 by lgerim            #+#    #+#             */
/*   Updated: 2021/03/26 03:07:10 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size_int(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
	}
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*dest;
	unsigned int	nb;

	i = ft_size_int(n);
	if (!(dest = malloc((sizeof(char)) * (i + 1))))
		return (0);
	if (n < 0)
	{
		nb = n * (-1);
		dest[0] = '-';
	}
	else
		nb = n;
	if (n == 0)
		dest[0] = '0';
	dest[i] = '\0';
	i--;
	while (nb != 0)
	{
		dest[i] = ((nb % 10) + 48);
		nb = nb / 10;
		i--;
	}
	return (dest);
}

