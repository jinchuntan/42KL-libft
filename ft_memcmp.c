/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:38:48 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:34:09 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Memory Compare function
Compares two blocks of memory (specified by pointers)
and returns an integer value that indicates the order of the blocks in memory
Often used to compare strings or other data structures that are represented
as arrays of bytes in memory

Input:
Takes three arguments
pointers to the blocks of memory to be compared and the number of bytes to be
compared

Output:  
If n is zero, the return value is zero.
If n is a non-zero value, the sign is determined by the sign of
the difference between the first pair of bytes (interpreted as
unsigned char) that differ in s1 and s2.
*/

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int				i;
	unsigned char	*first_buffer;
	unsigned char	*second_buffer;

	i = 0;
	first_buffer = (unsigned char *)s1;
	second_buffer = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while ((i < n - 1) && (first_buffer[i] == second_buffer[i]))
	{
		i++;
	}
	return (first_buffer[i] - second_buffer[i]);
}
