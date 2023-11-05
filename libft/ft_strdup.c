/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:12:19 by codespace         #+#    #+#             */
/*   Updated: 2023/11/05 18:09:45 by codespace        ###   ########.fr       */
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
#include <stdio.h>

size_t    ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (*s++)
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(const char *s)
{
    char    *dup;
    int     i;

    i = 0;
    if (!(dup = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
    {
        return (NULL);
    }
    while (*s)
    {
        dup[i++] = *s++;
    }
    dup[i] = '\0';
    return (dup);
}
