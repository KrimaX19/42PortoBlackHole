/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:42:01 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/06 12:22:18 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    while (n > 0)
    {
        *((char *)s++) = c;
        --n;
    }
}

int main (void)
{
  char str[] = "almost every programmer should know memset!";
  ft_memset (str,'@',6);
  puts (str);
  return 0;
}

/*
Output:
------ every programmer should know memset!

https://cplusplus.com/reference/cstring/memset/
*/