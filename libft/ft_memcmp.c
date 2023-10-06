/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:22:51 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/06 16:38:25 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compara a quantidade de "n" bytes nas duas areas de memoria "s1" e "s2".
Retorna um "int" < , = ou > que o primeiro "n" bytes de "s2".
para um retorno sem ser "0" o sinal e determinado pela diferenca do primeiro
par de bytes de "s1" "s2".
Se "n = 0", retorna "0"
*/

#include <string.h>
#include <stdio.h>

int memcmp(const void *s1, const void *s2, size_t n)
{

}

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}