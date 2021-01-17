/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 11:46:01 by lgerim            #+#    #+#             */
/*   Updated: 2021/01/17 11:51:22 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_putchar(char c);

void	ft_print_skelet(int x, char tete, char corps, char pieds)
{
	ft_putchar(tete);
	while ((x - 1) > 1)
	{
		ft_putchar(corps);
		x--;
	}
	if (x > 1)
		ft_putchar(pieds);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_skelet(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			ft_print_skelet(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			ft_print_skelet(x, 'A', 'B', 'C');
	}
	return ;
}