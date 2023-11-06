/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:50:16 by rusoares          #+#    #+#             */
/*   Updated: 2023/11/06 21:35:39 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name: ft_substr
Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);

Turn in files -

Parameters s: The string from which to create the substring. 
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.

s = a string que vai criar substring
start = de onde vai comecar a substring
len = o maximo da substring

retorna a substring.
se for NULL


Return value: The substring. NULL if the allocation fails.

External functs.: malloc
Description: Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <libft.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    const char    *str;
    const char  *begin;
    
    sub = malloc(len + 1);
    str = (char *)s;
    begin = &str[start];
    if (str)
    {
        return("");
    }
    if (start >= ft_strlen(str))
    {
        return ("");
    }
    ft_memcpy(sub, begin, len);
    sub[len] = '\0';
    return(sub);
}