/*
procura a primeira ocurrencia do terminador na string pequena na mesma posicao da string grande.
o que aparecer depois do '\0' nao e procurado.
se a str pequena for vazio a grande e retornada.
se a pequena for > que a grande e retornado NULL, caso contrario return ponteiro para posicao pequena
*/

#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little)
	{
		return ((char *)big);
	}
	while (*little != '\0' || *little == (char)len)
	{
		if (*big == '\0')
		{
			return (NULL);
		}
		little++;
		big++;
	}
	return ((char *)little);
}
