/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:21:06 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/17 20:56:01 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*r;
	int		len;

	len = ft_strlcpy (NULL, (char *)str1, 0) \
	+ ft_strlcpy (NULL, (char *)str2, 0);
	r = (char *)malloc(len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(r, (char *)str1, len + 1);
	ft_strlcat (r, (char *)str2, len + 1);
	return (r);
}
