/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:07:01 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/02 13:14:21 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
    {
        return (2048);
    }
    return(0);
}

int main(void)
{
    int a = 'a';
    int b = '9';
    int c = '1';

    printf("Isdigit: %d \n", isdigit(a));
    printf("FT-isdigit: %d \n", ft_isdigit(a));
    printf("Isdigit: %d \n", isdigit(b));
    printf("FT_isdigit: %d \n", ft_isdigit(b));
    printf("Isdigit: %d \n", isdigit(c));
    printf("FT-isdigit: %d \n", ft_isdigit(c));
    return(0);
}