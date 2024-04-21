/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:34:31 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:01:42 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
String Length Copy
The strlcpy() function copies up to size - 1 characters from the 
NULL-terminated string src to dst, NUL-terminating the result.

Input:
dst: a pointer to a buffer where the string will be copied to.
src: a pointer to the string that will be copied.
size: the maximum number of characters that can be copied to the 
	  destination buffer, including the null terminator.

Output:
Returns the total length of the string they tried to create
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
