/* retorna um ponteiro para a ultima ocorrencia de c na string s. */

#include <unistd.h>
/*
int	contar(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
*/	
char	*ft_strrchr (const char *s, int c)
{
	const char *r = s;

	if (c == '\0')
	{
		return ("");
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			r = (char *)s;
		}
		s++;
	}
	if (*r != '\0')
	{
		return (char *)r;
	}
	return (NULL);
}
/*	if (c == '\0')
	{
		return (char *)s;
	}
	return (NULL);*/

