/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:25:23 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/16 22:01:50 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*j;
	t_list	*i;

	j = 0;
	while (lst)
	{
		i = ft_lstnew(f(lst->content));
		if (!i)
		{
			ft_lstclear(&j, del);
			return (0);
		}
		ft_lstadd_back(&j, i);
		lst = lst->next;
	}
	return (j);
}
