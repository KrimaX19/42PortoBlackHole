/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:47:13 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/06 19:44:03 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			r = (s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return ((char *)r);
}
