/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:26:09 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/03 22:43:25 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *nptr)
{
	long int	a;
	int	i;
	int s;

	i = 0;
	s = 1;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	if (nptr[i] == '-')
	{
	s = -1;
	i++;
	}
	if (nptr[i] >= '0' &&  nptr[i] <= '9')
	{
		a = (nptr[i] - '0');
		i++;
		while (nptr[i] >= '0' &&  nptr[i] <= '9')
		{
		a *= 10;
		a += nptr[i] - '0';
		i++;
		}
	return (a *(s));
	}
return (0);
}

