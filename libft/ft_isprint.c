/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:42:13 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (16384);
	}
	return (0);
}
/*
int main(void)
{
    int a = 10;
    int b = 800;
    int c = 33;
    int d = 155;

    printf("Isprint: %d\n", isprint(a));
    printf("Isprint: %d\n", isprint(b));
    printf("Isprint: %d\n", isprint(c));
    printf("Isprint: %d\n", isprint(d));
    printf("Ft-isprint: %d\n", ft_isprint(a));
    printf("Ft-isprint: %d\n", ft_isprint(b));
    printf("Ft-isprint: %d\n", ft_isprint(c));
    printf("Ft-isprint: %d\n", ft_isprint(d));

    return(0);
}*/
