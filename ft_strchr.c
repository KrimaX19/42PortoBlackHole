/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:46:10 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/27 19:02:07 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
