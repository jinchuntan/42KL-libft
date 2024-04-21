/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:13:24 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:36:21 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Memory Move
Copies a block of memory from one location to another, 
even if the source and destination regions overlap. 

The memmove() function copies n bytes from memory area src to
memory area dest.  The memory areas may overlap: copying takes
place as though the bytes in src are first copied into a
temporary array that does not overlap src or dest, and the bytes
are then copied from the temporary array to dest.

The function returns a pointer to dest.

Input:
dest: a pointer to the destination array where the content is to be copied
src: the pointer to the source of data to be copied
n: the number of bytes to be copied

Output:
dest: the pointer to the destination array
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	if (!src && !dest)
	{
		return (0);
	}
	if (dest > src)
	{
		pdest = dest + n;
		psrc = src + n;
		while (n-- > 0)
			*(--pdest) = *(--psrc);
	}
	else
	{
		pdest = dest;
		psrc = src;
		while (n-- > 0)
			*pdest++ = *psrc++;
	}
	return (dest);
}
