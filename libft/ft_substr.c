/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:50:16 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/17 23:58:05 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if ((start + len) > ft_strlen(s))
		len = ft_strlen (s) - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (len == 0)
	{
		str[0] = '\0';
		return (str);
	}
	ft_strlcpy (str, (char *) &s[start], len + 1);
	return (str);
}
