/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:15:02 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/02 13:21:04 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    if((c >= '0' && c <= '9')||(c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    {
        return(8);
    }
    return(0);
}

int main(void)
{
    int a = 32;
    int b = '+';
    int c = '0';

    printf("isalnum: %d\n", isalnum(a));
    printf("isalnum: %d\n", isalnum(b));
    printf("isalnum: %d\n", isalnum(c));
    printf("ft_isalnum: %d\n", ft_isalnum(a));
    printf("ft_isalnum: %d\n", ft_isalnum(b));
    printf("ft_isalnum: %d\n", ft_isalnum(c));
    return(0);
}