/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:50:16 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/09 22:36:40 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	char	*str;
	char	*begin;

	str = (char *)s;
	begin = str + (start);
	if (ft_strlen(s) < start)
	{
        sub = ft_calloc(1, sizeof(char));
		return (sub);
	}
	sub = ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (sub);
	}
   /* size_t i = 0;
    while (*str &&( i < len))
    {
        sub[i] = *begin;
        i++;
        begin++;
    }
	*/memcpy(sub, begin, len);
	sub[len] = '\0';
	return (sub);
}
