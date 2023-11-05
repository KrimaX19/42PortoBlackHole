/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:12:19 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 17:15:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*The strdup() function returns a pointer to a new string which is a duplicate of the string s.
Memory for the new string is obtained with malloc(3), and can be freed with free(3).

RETURN VALUE
On success, the strdup() function returns a pointer to the duplicated string.
It returns  NULL  if insufficient memory was available, with errno set to indicate
the cause of the error.
*/
#include <unistd.h>

char    *strdup(const char *s)
{
    
}