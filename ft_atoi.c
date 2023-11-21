/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:26:09 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/17 20:53:52 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *nptr)
{
	long int	a;
	int			s;

	s = 1;
	while ((*nptr == ' ') || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			s = -1;
		nptr++;
	}
	if (*nptr >= '0' && *nptr <= '9')
	{
		a = (*nptr - '0');
		nptr++;
		while (*nptr >= '0' && *nptr <= '9')
		{
			a *= 10;
			a += *nptr - '0';
			nptr++;
		}
		return (a *(s));
	}
	return (0);
}
