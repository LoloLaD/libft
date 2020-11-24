/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:17:11 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:38:06 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	size_t i;
	char *tab;

	i = 0;
	tab = str;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
	str = tab;
}
