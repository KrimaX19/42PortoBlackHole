/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:38:15 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/02 17:45:14 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	int				i;

	i = 0;
	t = (unsigned char *)s;
	while (n > 0)
	{
		if (t[i] == (unsigned char)c)
		{
			return (&t[i]);
		}
		i++;
		--n;
	}
	return (NULL);
}