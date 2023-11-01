/*
converte a porcao inicial de uma string apontada por nptr para int
retorna um long

Retorna o valor ou 0 se der erro
*/

#include <unistd.h>

int	ft_atoi(const char *nptr)
{ 
	long int	a;

	while (*nptr != '\0')
	{
		if (*nptr >= '0' && *nptr <= 9)
		{
			a = (long int )nptr;
			a *= 10;
			nptr++;
		}
		else
		{
		return (0);
		}
	}
	return (a);
}		
