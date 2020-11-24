/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:20:28 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:46:11 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t  n)
{
	size_t i;
	char *dest;
	char *source;

	dest = dst;
	source = (char*)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	dst = dest;
	return (dst);
}
