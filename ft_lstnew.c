/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:19:02 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/27 19:01:55 by rusoares         ###   ########.fr       */
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
