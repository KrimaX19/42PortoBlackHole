/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:47:04 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/02 21:19:04 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!*little)
	{
		return ((char *)big);
	}
	while (i != len)
	{
		if (little[i] == '\0')
		{
			return ((char *)big + i);
		}
		i++;
	}
	return ((char *)little);
}
