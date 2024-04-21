/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:50:01 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:46:41 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"
#include <stdint.h>
/* 
Function:
The calloc function allocates a block of memory for an array of count 
elements, each of which has a size of size bytes. 
It initializes the memory block to zero.

Input:
size_t count: The number of elements to allocate memory for.
size_t size: The size of each element in bytes

Output:
Pointer to the allocated memory block that has been initialised with zeros or
NULL if the allocation fails.

Explanation & Thought Process:
size_t is an unsigned integer type used for representing the size of objects
in memory. Commonly used in functions and data structures that deal with 
memory allocation and manipulation.

The declaration in this function is to ensure that the function is consistent
with other memory-related functions and can handle objects of any size. It
also helps us to avoid issues related to integer overlfow and underflow.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void		*result;
	size_t		total_size;

	total_size = count * size;
	result = malloc(total_size);
	if (size != 0 && count > SIZE_MAX / size)
	{
		return (NULL);
	}
	if (!result)
	{
		return (NULL);
	}
	ft_bzero(result, total_size);
	return (result);
}
