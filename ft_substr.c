/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:39:59 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:10:39 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Allocates with malloc(3) and returns a substring from the string 's'.
The substring begins at index 'start' and is of maximum size 'len'.

Input:
s: The string from which to create the substring.
start: The start index of the substring in the string 's'.
len: The maximum length of the substring

Output:
The substring (pointer to the newly allocated string that containes the 
extracted substring)
NULL if the allocation fails

Explanation:
1) The first if statement checks whether the string given is NULL or not
2) The next if statement checks whether the starting parameter is greater
or equal to the length of the string 's'. If it is, the function will
return a new empty string created by calling the ft_strdup function
3) The next if statement checks if the 'len' parameter is greater than
the remaining length of the string 's' after the 'start' index.
If it is, the variable is set to the remaining length
4) The next if statement hecks if the memory allocation of the substring 
pointer has been done successfully.
5) We will then copy the len characters from the s string, starting at
index 'start' into the substr_pt string. (memcpy)
6) End the string with the null terminator and return the newly created
string
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr_pt;
	size_t	s_len;

	if (!s)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	substr_pt = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr_pt)
	{
		return (NULL);
	}
	ft_memcpy(substr_pt, s + start, len);
	substr_pt[len] = '\0';
	return (substr_pt);
}
