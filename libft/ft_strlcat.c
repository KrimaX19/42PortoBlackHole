/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:16:10 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/17 20:56:05 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	contar(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	j;

	len_dst = contar(dst);
	len_src = contar(src);
	j = 0;
	if (size <= len_dst)
	{
		return (len_src + size);
	}
	while (src[j] != '\0' && len_dst + j < (size - 1))
	{
		dst[len_dst + j] = src[j];
		j++;
	}
	dst[len_dst + j] = '\0';
	return (len_dst + len_src);
}
