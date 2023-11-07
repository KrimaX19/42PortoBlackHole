/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:21:06 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/07 20:13:19 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <libft.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*r;
	int		len;

	len = ft_strlcpy (NULL, (char *)str1, 0) + ft_strlcpy (NULL, (char *)str2, 0);
	r = (char *)malloc(len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(r, (char *)str1, len + 1);
	ft_strlcat (r, (char *)str2, len + 1);
	return (r);
}

/*
{
	char	*dst;
	char	*cpy;
	char	len;

	len = (ft_strlen(str1)+ft_strlen(str2));
	dst = malloc(sizeof(dst) * len + 1);
	if (dst && *str1 && *str2)
	{
		cpy = dst;
		while (*str1 != '\0')
		{
			*dst++ = *str1++;
		}
		while (*str2 != '\0')
		{
			*dst++ = *str2++;
		}
		*dst = '\0';
	}
	else
	{
		return (NULL);
	}
	return (cpy);
}
*/