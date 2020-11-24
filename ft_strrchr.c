/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:23:05 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:55:23 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	char *ptr;
	int i;

	i = 0;
	ptr = 0;
	while (str[i])
	{
		if (str[i] == c)
			ptr = (char *)&str[i];
		i++;
	}
	if (ptr != 0)
		return (ptr);
	else
		return (0);
}
