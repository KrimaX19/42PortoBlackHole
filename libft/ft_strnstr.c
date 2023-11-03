/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:47:04 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/03 21:11:07 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (little[k] != '\0')
		k++;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && (i + j) < len)
		{
			j++;
		}
		if (j == k)
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
