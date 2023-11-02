/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:47:04 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/02 17:47:29 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!*big && !len)
	{
		return (NULL);
	}
	if (!*little)
	{
		return ((char *)big);
	}
	while (*big == *little && *big <= (char)len)
	{
		if (!*little)
		{
			return ((char *) big);
		}
		little++;
		big++;
	}
	return ((char *)little);
}