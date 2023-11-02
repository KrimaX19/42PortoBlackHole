/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:26:09 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/02 18:26:13 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *nptr)
{
	long int	a;

	while (*nptr != '\0')
	{
		if (*nptr >= '0' && *nptr <= 9)
		{
			a = (long int )nptr;
			a *= 10;
			nptr++;
		}
		else
		{
			return (0);
		}
	}
	return (a);
}
