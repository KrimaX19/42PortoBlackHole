/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:16:10 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/30 20:17:29 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h> 
*/
#include <unistd.h>

int	contar(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	j;

	len_dst = contar(dst);
	len_src = contar(src);
	j = 0;
	if (size <= len_dst)
	{
		return (len_src + size);
	}
	while (src[j] != '\0' && len_dst + j < (size - 1))
	{
		dst[len_dst + j] = src[j];
		j++;
	}
	dst[len_dst + j] = '\0';
	return (len_dst + len_src);
}
/*
int main(void)
{
    char dst [20] = "012";
    char src [] = "3456789";
    size_t size = 5;

    printf("Inicial DST: %s\n", dst);
   // printf("Inicial SRC: %s\n", src);
   // printf("Contagem: %d\n",ft_strlcat(dst, src, size));
    printf("Final DST: %s\n", dst);
  //  printf("Final SRC: %s\n", src);
    return(0);
}*/
