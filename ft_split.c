/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:58:20 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/26 16:34:54 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cont(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		if (*s == c)
		{
			j = 0;
		}
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**split;

	i = 0;
	j = 0;
	split = malloc ((cont(s, c) + 1) * sizeof (char *));
	if (s == NULL || split == NULL)
		return (0);
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && (start >= 0))
		{
			split[j++] = ft_substr(s, start, i - start);
			start = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
