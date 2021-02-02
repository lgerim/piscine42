/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 11:28:34 by lgerim            #+#    #+#             */
/*   Updated: 2021/02/02 20:13:51 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	else if (index == 0)
	{
		return (0);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
