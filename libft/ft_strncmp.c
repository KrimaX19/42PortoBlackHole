/*
compara 2 strings a comparacao e feita usando unsigned char.
retorna um inteiro indicando o resultado da comparacao
0 se s1 e s2 sao iguais
valor negativo se s1 < s2
valor positivo se s1 > s2
*/

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != (char)n)
	{
		if (*s1 != *s2)/* = ret 0*/
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
