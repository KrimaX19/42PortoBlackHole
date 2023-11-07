/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:50:16 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/07 19:36:59 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	const char	*str;
	const char	*begin;

	str = (char *)s;
	begin = &str[start];
	sub = malloc(len + 1);
	if (sub == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return ("");
	}
	if (start >= ft_strlen(str))
	{
		return ("");
	}
	ft_memcpy(sub, begin, len);
	sub[len] = '\0';
	return (sub);
}
