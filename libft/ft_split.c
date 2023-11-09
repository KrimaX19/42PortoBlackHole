/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:58:20 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/09 22:42:18 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		contar(char const *s, char c)
{
	int		i;
	int		j;
	
	i = 0;
	j = 0;	
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			i++;
		}
		else
		{
			j++;
		}
		i++;
	}
	return (j);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**t;	
	char	**r;

	i = 0;
	j = 0;
	t = NULL;
	r = (char **)malloc(ft_strlen(s) - contar(s,c) * sizeof(char*) + 1);
	if ( r == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ft_memcpy(*r, *t,j);
			j = 0;
			i++;
		}
		*t[j] = s[i];
		i++;
		j++;
	}
    return (r);
}
