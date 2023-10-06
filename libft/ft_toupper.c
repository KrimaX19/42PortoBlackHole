/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:07:30 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/02 14:17:04 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        c -= 32;
        return(c);
    }
    return(c);
}

int main(void)
{
    int a = 10;
    int b = 122;
    int c = 'A';

    printf("Toupper: %c, %d \n", toupper(a),toupper(a));
    printf("Toupper: %c\n", toupper(b));
    printf("Toupper: %c\n", toupper(c));
    printf("Ft_toupper: %c\n", ft_toupper(a));
    printf("Ft_toupper: %c\n", ft_toupper(b));
    printf("Ft_toupper: %c\n", ft_toupper(c));
    return(0);
}