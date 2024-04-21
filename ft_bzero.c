/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:02:10 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 10:57:14 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/* 
Function:
Used to set a block of memory to zero

Input:
dst - An existing object that you want to fill with zeroes.
n - the number of bytes to be filled

Output:
sets the first n bytes of thememory area starting at dest to zero/NULL.

Explanation:
The function sets the first part of an object to null bytes 
bzero() function erases the data in the n bytes of the memory starting at the 
location pointed to by s, by writing zeros (bytescontaining '\0') to that area

bzer0() function in general has been deprecated in favour of 'memset'

size_t is an unsigned integer data type that is guaranteed to be 
able to hold the size of any object that can be created in C. 
It is commonly used in C programming to represent sizes 
and counts of objects. 

Basically just iterates over the memory area, setting each byte to the null
character
*/

void	ft_bzero(void *dest, size_t n)
{
	size_t	i;
	char	*pointer_dest;

	i = 0;
	pointer_dest = dest;
	while (i < n)
	{
		pointer_dest[i] = '\0';
		i++;
	}
}
