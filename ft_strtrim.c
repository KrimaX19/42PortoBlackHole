/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:12:39 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/26 16:27:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	char			*r;
	unsigned int	i;
	int				f;

	i = 0;
	f = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr (set, s1[i]))
		i++;
	while (f >= 0 && ft_strchr (set, s1[f]))
		f--;
	if (f <= 0 && i == ft_strlen(s1))
	{
		len = 0;
		f = 0;
	}
	else
		len = (f - i) + 1 ;
	r = malloc(len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	ft_strlcpy (r, (char *)s1 + i, len + 1);
	return (r);
}
