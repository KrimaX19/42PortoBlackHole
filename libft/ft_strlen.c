/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:53:48 by rusoares          #+#    #+#             */
/*   Updated: 2023/10/21 17:40:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
    char a[] = "quinhetos e cinquenta e cinco";

    printf("Strlen: %d\n", strlen(a));
    printf("ft_trlen: %d\n", ft_strlen(a));

    return(0);
}*/
