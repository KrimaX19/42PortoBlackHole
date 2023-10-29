/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:47:27 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
copiar src para um local temporario que nao ultrapasse src 
ou dest e depois copiar do temporario para o dest
arranjar espaco para otemporario e depois copiar para dst.
Em c nao se pode criar arrays variaveis a nao serque seja uma variavel.
*/
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*t;
	char	*dst;

	t = (char *)src;
	dst = (char *)dest;
	if (dst < t && t < dst + n)
	{
		while (n--)
			*dst++ = *t++;
	}
	else if (dst > t && dst < t + n)
	{
		dst += n;
		t += n;
		while (n--)
			*(--dst) = *(--t);
	}
	else
	{
		while (n--)
			*dst++ = *t++;
	}
	return (dest);
}
/*
int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
