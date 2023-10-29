/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:17:44 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}
/*
int main(void)
{
    int a = 10;
    int b = 122;
    int c = 'A';

    printf("Tolower: %c, %d\n", tolower(a),tolower(a));
    printf("Tolower: %c, %d\n", tolower(b),tolower(b));
    printf("Tolower: %c, %d\n", tolower(c),tolower(c));
    printf("Ft_Tolower: %c,%d\n", ft_tolower(a),ft_tolower(a));
    printf("Ft_Tolower: %c,%d\n", ft_tolower(b),ft_tolower(b));
    printf("Ft_Tolower: %c,%d\n", ft_tolower(c),ft_tolower(c));
    return(0);
}*/
