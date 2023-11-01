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
char	*ft_strrchr(const char *s, int c)
{
	const char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			r = ((const char *)s);
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return  ((char *)r);
}
