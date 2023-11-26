/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:04:10 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/26 16:34:38 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		conta(int n);
int		negativo(int n);
long	conver(long n);

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	long	nb;
	char	*conv;

	nb = conver(n);
	neg = negativo(n);
	i = conta(n);
	if (n == 0)
		i = 1;
	if (neg == 1)
		i++;
	conv = malloc (sizeof (char) * i + 1);
	if (!conv)
		return (NULL);
	conv[i] = '\0';
	while (i != 0)
	{
		conv[--i] = '0' + (nb % 10);
		nb /= 10;
	}
	if (i == 0 && neg == 1)
		conv[i] = '-';
	return (conv);
}

int	conta(int n)
{
	long	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	negativo(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

long	conver(long n)
{
	long	nb;

	if (n < 0)
	{
		nb = n * -1;
		return (nb);
	}
	return (n);
}
