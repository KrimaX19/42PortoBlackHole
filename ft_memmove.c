/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:47:27 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/17 20:55:25 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*t;
	char	*dst;

	t = (char *)src;
	dst = (char *)dest;
	if (!dst && !t)
		return (0);
	if (dst < t && t < dst + n)
	{
		while (n--)
			*dst++ = *t++;
	}
	else if (dst > t && dst < t + n)
	{
		dst += n;
		t += n;
		while (n--)
			*(--dst) = *(--t);
	}
	else
	{
		while (n--)
			*dst++ = *t++;
	}
	return (dest);
}
