/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:21:06 by codespace         #+#    #+#             */
/*   Updated: 2023/11/07 12:38:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	strjoin(const char *str1, const char *str2)
{
	char *dst;
	char *cpy;

	dst = (char)malloc(sizeof(dst) * (ft_strlen(str1)+ft_strlen(str2) + 1));
	if (dst && *str1 & *str2)
	{
		cpy = dst;
		while (*str1 != '\0')
			{
				*dst++ == *str1++;
			}
		while (*str2 != '\0')
		{
			*dst++ == *str2++;
		}
		*dst = '\0'		
	}
	else
	{
		return (NULL);
	}
	return (cpy);
}