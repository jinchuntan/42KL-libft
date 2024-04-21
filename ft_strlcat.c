/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:49:06 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:00:46 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
String Length Concatenation
Concatenate strings in a safe way, without risking buffer overflows.
The strlcat() function appends the NULL-terminated string src to the end of
dst. It will append at most size - strlen(dst) - 1 bytes, 
NULL-terminating the result.

Appends the NULL-terminated string src to the end of dst. 
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the 
result. 

Input:
dst: A pointer to the destination string, which will receive the 
	concatenated string.
src: A pointer to the source string, which will be appended to the 
	destination string.
dstsize: The maximum size of the destination buffer, to avoid buffer 
overflows.

Output:
total_len: the length of the concatenated string

Explanation:
The first if statement checks if dest_len is greater than dest_size to
ensure that the destination string will not exceed the maximum size

The second if statement checks if dest_len is equal to dst_size, the 
function returns the sum of dst_size and src_len as the entire src
string cannot be appended to dest.

Otherwise the total len is set to the sum of dest_len and src len. 
The function determines if the remaining space in dest is sufficient
to append src. If not,
it copies as much of 'src' as will fit into the remaining space in dest.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len > dest_size)
		dest_len = dest_size;
	if (dest_len == dest_size)
		return (dest_size + src_len);
	total_len = dest_len + src_len;
	if (src_len >= dest_size - dest_len)
	{
		ft_memcpy(dest + dest_len, src, dest_size - dest_len - 1);
		dest[dest_size - 1] = '\0';
	}
	else
	{
		ft_memcpy(dest + dest_len, src, src_len);
		dest[total_len] = '\0';
	}
	return (total_len);
}
