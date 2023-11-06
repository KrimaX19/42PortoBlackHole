/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:46:10 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/06 19:26:13 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while ((unsigned char) *str != (unsigned char)c)
	{
		if ((unsigned char) *str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
