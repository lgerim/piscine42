/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:11:49 by lgerim            #+#    #+#             */
/*   Updated: 2021/03/26 03:12:02 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	i = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (i > 9)
		ft_putnbr_fd(n / 10, fd);
	n = n % 10 + '0';
	ft_putchar_fd(n, fd);
}
