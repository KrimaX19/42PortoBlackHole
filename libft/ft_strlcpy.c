/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:27:02 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
#include <unistd.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}
/*
int main(void)
{
    char dst1 [] = "0000";
    char src1 [] = "123456";
    //size_t size1 = 7;
    char dst2 [] = "0000";
    char src2 [] = "123456";
    //size_t size2 = 7;
    char dst3 [] = "0000";
    char src3 [] = "123456";
    //size_t size3 = 7;

    printf("SRC = DST & SIZE = SRC&DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst1, src1, 4));
    printf("SRC:%s\n", src1);
    printf("DST:%s\n", dst1);
    printf("SRC = DST & SIZE < DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst1, src1, 3));
    printf("SRC:%s\n", src1);
    printf("DST:%s\n", dst1);
    printf("SRC = DST & SIZE > DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst1, src1, 5));
    printf("SRC:%s\n", src1);
    printf("DST:%s\n", dst1);
    
    printf("SRC > DST & SIZE = SRC&DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst2, src2, 4));
    printf("SRC:%s\n", src2);
    printf("DST:%s\n", dst2);
    printf("SRC > DST & SIZE < DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst2, src2, 3));
    printf("SRC:%s\n", src2);
    printf("DST:%s\n", dst2);
    printf("SRC > DST & SIZE > DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst2, src2, 5));
    printf("SRC:%s\n", src2);
    printf("DST:%s\n", dst2);

    printf("SRC < DST & SIZE = SRC&DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst3, src3, 4));
    printf("SRC:%s\n", src3);
    printf("DST:%s\n", dst3);
    printf("SRC < DST & SIZE < DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst3, src3, 3));
    printf("SRC:%s\n", src3);
    printf("DST:%s\n", dst3);
    printf("SRC < DST & SIZE > DST\n");
    printf("Resultado: %ld\n", ft_strlcpy(dst3, src3, 5));
    printf("SRC:%s\n", src3);
    printf("DST:%s\n", dst3);
    printf("Resultado SRC > DST: %ld\n", ft_strlcpy(dst2, src2, size2));
    printf("SRC:%s\n", src);
    printf("DST:%s\n", dst);
    printf("Resultado SRC < DST: %ld\n", ft_strlcpy(dst3, src3, size3));
    printf("SRC:%s\n", src);
    printf("DST:%s\n", dst);
    return(0);
}*/

/*
srtlcpy
Condicoes:
    o size tem de ser > 0 para ser colocado o null terminator

Copia ate o size -1 a string de src para o dst.
Coloca a terminacao 

*/
