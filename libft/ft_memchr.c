/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:38:15 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/06 16:16:09 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Faz um scan pela quantidade de bytes "n" no local apontado por "s", pelo
caracter descrito em "c".
"c" e "s" sao interpretados por "unsigned char"
*/
#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i = 0;
    char *t;

    t = (char *)s;

    while(n > 0)
    {
        if(t[i] == c)
        {
            return(&t[i]);
        }
        i++;
        --n;
    }
    return(NULL);
}

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = 'a';
   char *ret;
   char *ori;

   ret = ft_memchr(str, ch, strlen(str));
   ori = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, ori);

   return(0);
}