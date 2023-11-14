/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:58:20 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/14 11:06:46 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//contar as palavras com um contador entre caracteres,
//assim consigo saber quantas palavras tenho entre o char c
int contar(const char *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(*s != '\0')
	{
		if(*s != c && j == 0) 
		{
			j = 1;
			i++;
		}
		if(*s == c)
		{
			j = 0;			
		}
		s++;
	}
	return(i);
}
/*
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	split = NULL;
	if(!s || !(split == malloc((contar(s, c) + 1) * sizeof(char*))))
	{
		return (NULL);
	}
	start = -1;
	while (i <= ft_strlen(s))
	{
		if(s[i] != c && start < 0)
		{
			start = i;
		}
		else if ((s[i] == c || i == strlen(s)) && (start >= 0))
		{
			split[j++] = ft_substr(s, start, i - start);
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);	
}*/
char        **ft_split(char const *s, char c)
{
    size_t    i;
    size_t    j;
    int        start;
    char    **split;

    i = 0;
    j = 0;
    if (!s || !(split = malloc((contar(s, c) + 1) * sizeof(char*))))
      return (0);
    start = -1;
    while (i <= strlen(s))
    {
        if(s[i] != c && start < 0)
        {
            start = i;
        }
        else if ((s[i] == c || i == strlen(s)) && (start >= 0))
        {
            split[j++] = ft_substr(s, start, i - start);
            start = -1;
        }
        i++;
    }
    split[j] = 0;
    return (split);    
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