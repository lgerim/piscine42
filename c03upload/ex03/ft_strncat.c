,/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:16:34 by lgerim            #+#    #+#             */
/*   Updated: 2021/01/23 14:22:55 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *lol;

	lol = dest;
	while (*lol)
		lol++;
	while (nb-- && *src)
		*lol++ = *src++;
	*lol = '\0';
	return (dest);
}
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ecr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc > i)
	{
		ecr(argv[i]);
		i++;
	}
	return (0);
}