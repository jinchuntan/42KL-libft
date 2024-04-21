/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:09:33 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:31:13 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
The function scans the initial n bytes of the memory
area pointed to by s for the first instance of c.  Both c and the
bytes of the memory area pointed to by s are interpreted as
unsigned char.

memchr stands for memory character, searches for the first occurence of the 
character 'c' in the memory block (if found), otherwise returns NULL if the 
character is not found

Input:
s: a pointer to a block of memory to search
c: the value to search for, as an integer
n: the number of bytes to search

Output:
buffer: The pointer to the first occurence of the character 'c' in the first
'n' bytes of the memory block pointed to by 's' or NULL if the character is
not found.

Explanation:
Searches for the first occurence of a specific cahracter in the first 'n'
bytes of the memory block
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*buffer;
	unsigned char	c2;

	buffer = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*buffer == c2)
		{
			return (buffer);
		}
		buffer++;
		i++;
	}
	return (NULL);
}
