/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:19:02 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/26 16:27:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*inicio;

	inicio = (t_list *) malloc(sizeof(t_list));
	if (inicio == NULL)
		return (NULL);
	inicio->content = content;
	inicio->next = NULL;
	return (inicio);
}
