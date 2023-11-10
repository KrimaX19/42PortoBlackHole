/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:43:47 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/10 23:23:42 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -1 *nb;
	}
	if (nb >= 10)
	{
		ft_putchar_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10,fd);
	}
	ft_putchar_fd(nb + 48, fd);
}