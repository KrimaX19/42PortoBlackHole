/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:04:10 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/14 20:16:05 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	long	nb;
	char	*conv;

	i = 0;
	nb = n;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		nb *= -1;
		i++;
	}
	if (n == 0)
	{
		i = 1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	conv = malloc (sizeof (char) * i + 1);
	if (!conv)
	{
		return (NULL);
	}
	conv[i] = '\0';
	while (i != 0)
	{
		conv[--i] = '0' + (nb % 10);
		nb /= 10;
	}
	if (i == 0 && neg == 1)
	{
		conv[i] = '-';
	}
	return (conv);
}
