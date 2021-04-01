/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 02:32:13 by lgerim            #+#    #+#             */
/*   Updated: 2021/03/26 02:36:35 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		nega;
	int		nbr;

	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\r')
		|| (str[i] == '\v') || (str[i] == ' ') || (str[i] == '\f'))
		i++;
	nega = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if ((str[i + 1] == '-') || (str[i + 1] == '+'))
			return (0);
		if (str[i] == '-')
			nega = -1;
		i++;
	}
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	return (nbr * nega);
}
