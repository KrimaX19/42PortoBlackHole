/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:16:20 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*((char *)s++) = '\0';
		--n;
	}
}
/*
int main (void)
{
  char str[] = "almost every programmer should know memset!";
  ft_bzero (str,6 );
  puts (str);
  return 0;
}*/
