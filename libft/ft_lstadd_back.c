/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:07:32 by lgerim            #+#    #+#             */
/*   Updated: 2021/03/26 03:07:44 by lgerim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (alst && *alst)
	{
		lst = *alst;
		while (lst->next)
		{
			lst = lst->next;
		}
		lst->next = new;
	}
	else if (alst)
		*alst = new;
}
