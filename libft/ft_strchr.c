/*retorna um ponteiro para primeira ocorrencia do caracter c na string s
 retorna o ponteiro para o caracter correespondente ou Null se o caracter nao e encontrado
o '\0' e considerado parte da string por isso se o c for especificado '\0' ele retorna o ponteiro para o terminador
*/

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char )c)
		{
			return (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return (char *)s;
	}
	return (NULL);
}
