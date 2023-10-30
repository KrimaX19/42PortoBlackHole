/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:29:08 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/30 20:18:55 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		--n;
	}
	return (dest);
}
/*
int main () 
{
   const char src[50] = "https://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
*/
