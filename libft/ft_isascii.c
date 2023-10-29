/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:24:33 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*     isascii()
              checks whether c is a 7-bit unsigned char value that  fits  into
              the ASCII character set.
*/
/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
    int a = 32;
    int b = '+';
    int c = 128;

    printf("isascii: %d\n", isascii(a));
    printf("isascii: %d\n", isascii(b));
    printf("isascii: %d\n", isascii(c));
    printf("ft_isascii: %d\n", ft_isascii(a));
    printf("ft_isascii: %d\n", ft_isascii(b));
    printf("ft_isascii: %d\n", ft_isascii(c));
    return(0);
}*/
