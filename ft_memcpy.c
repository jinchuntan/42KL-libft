/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:51:31 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:35:14 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
The function copies n characters from memory area src to memory area dest

Input:
dest − This is pointer to the destination array where the content is to be
copied, type-casted to a pointer of type void*.
src − This is pointer to the source of data to be copied, type-casted to a 
pointer of type void*.
n − This is the number of bytes to be copied.

Output:
dest: the pointer to the destination array
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
	}
	return (dest);
}
