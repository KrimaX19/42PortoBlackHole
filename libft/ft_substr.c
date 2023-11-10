/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:50:16 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/10 20:57:42 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	o;
	size_t			i;
	char		*str;

	o = (unsigned int)len;
	i = -1;
	if (!s)
		return (NULL);
	if (o == 0 || start >= ft_strlen(s))
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if ((start + o) > ft_strlen(s))
		o = ft_strlen(s) - start;
	str = malloc(sizeof(char) * (o + 1));
	if (!str)
		return (NULL);
	while (++i < o)
		str[i] = s[i + start];
	str[i] = '\0';
	return (str);
}
