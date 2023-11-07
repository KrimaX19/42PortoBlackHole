/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:12:39 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/07 20:57:02 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	int		i;
	int		f;
	int		len;

	i = 0;
	f = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (f >= 0 && ft_strchr (set, s1[f]))
	{
		f--;
	}
	len = f - i + 1;
	r = (char *)malloc(len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	ft_strlcpy (r, (char *)s1 + i, len + 1);
	return (r);
}
