/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:51:44 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:37:47 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Memory Set
The function will copy the stated contents into a block of memory
Basically copies the character c (an unsigned char) to the first n 
characters of the string pointed to, by the argument str.

Input:
str − This is a pointer to the block of memory to fill.
c - This is the value to be set. The value is passed as an int,
    but the function fills the block of memory using the unsigned char 
	conversion of this value.
n − This is the number of bytes to be set to the value.

Output:
Returns a pointer to the initial memory location.
*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	char			*dest;

	dest = str;
	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return ((void *)str);
}
