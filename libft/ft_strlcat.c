/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:16:10 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/06 11:40:44 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h> 

int contar(char *c)
{
    int i = 0;

    while(c[i]) 
    {
        i++;
    }
    return(i);
}

size_t ft_strlcat(char *dst, char *src, size_t size)
{
    int len_dst = contar(dst);
    int len_src = contar(src);
    int j = 0;
    
    while(src[j] != '\0' && j <= --size)
    {
        dst[len_dst + j] = src[j];
        j++;
    }
    dst[len_dst + j] = '\0';
    return(len_dst + len_src);
}

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
}