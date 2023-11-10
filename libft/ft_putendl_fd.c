/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:38:11 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/10 22:40:14 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (fd > 0)
	{
		while (*s)
		{
			ft_putchar_fd(*s,fd);
			s++;
		}
		ft_putchar_fd('\n', fd);
	}
}