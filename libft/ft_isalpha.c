/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:37:12 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	return (0);
}
/*
int main(void)
{
    int a = 32;
    int b = 'G';
    int c = '0';

    printf("Isalpha: %d\n", isalpha(a));
    printf("Isalpha: %d\n", isalpha(b));
    printf("Isalpha: %d\n", isalpha(c));
    printf("FT-Isalpha: %d\n", ft_isalpha(a));
    printf("FT-Isalpha: %d\n", ft_isalpha(b));
    printf("FT-Isalpha: %d\n", ft_isalpha(c));

    return(0);
}*/
