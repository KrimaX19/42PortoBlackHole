/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:42:01 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = (char)c;
		++p;
		--n;
	}
	return (s);
}
/*
int main (void)
{
  char str[] = "almost every programmer should know memset!";
  ft_memset (str,'@',6);
  puts (str);
  return 0;
}


Output:
------ every programmer should know memset!

https://cplusplus.com/reference/cstring/memset/
*/
