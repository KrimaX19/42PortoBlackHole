/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:58:20 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/11 18:57:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_split(char const *s, char c)
{
	//returnar um double pointer para as palavras separadas
	// alocar memortia para o numero de palavras
	//alocar memoria para cada char da palavra
	//posso usar a substr para usar o inicio e o fim da substr

	char **split;
	int	i = 0;//incrementador de letras
	int	j = 0;//incrementador de palavras

	*split = s;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*split[k] = malloc(sizeof(char*) * i - j);
			j = i;
		}
		i++;
	}
}
/*
int	contar(char const *s, char c)
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
	r = (char **)malloc(ft_strlen(s) - contar(s, c) * sizeof(char *) + 1);
	if (r == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ft_memcpy(*r, *t, j);
			j = 0;
			i++;
		}
		*t[j] = s[i];
		i++;
		j++;
	}
	return (r);
}
*/