/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:25:28 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/21 18:48:54 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst && *lst)
	{
		ft_lstclear (&(*lst)->next, del);
		ft_lstdelone (*lst, del);
		*lst = NULL;
	}
}
