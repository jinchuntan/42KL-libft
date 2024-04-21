/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:49:47 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:06:54 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
String not found within n bytes 
Searches for a substring within a string, but limits the search to a 
specified number of bytes.

Input:
haystack: A pointer to the string to be searched.
needle: A pointer to the substring to search for.
n: The maximum number of bytes to search within the haystack.

Output:
Returns a pointer to the first occurrence of the needle substring within the 
haystack string, where the search is limited to the first n bytes of 
the haystack string. 

Explanation:
1) Checks if the needle string is empty or not. If it is, the pointer to
the haystack string is returned
2) The while loop will then iterate over the characters in the 'haystack',
comparing each substring of length (len). If a matching substring is 
found , a pointer to the start of the substring in the 'haystack'
string is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	len = ft_strlen(needle);
	while (n-- >= len && *haystack)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
