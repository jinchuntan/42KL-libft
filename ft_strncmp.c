/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:33:40 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:06:03 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
The ft_strncmp function returns a negative, zero or positive integer 
depending on whether the first n characters of the object pointed to by s1 are
less than, equal to, or greater than the first n characters of the object 
pointed to by s2.

Input:
s1: the pointer to the first string
s2: the pointer to the second string
n: the maximum number of bytes to compare in the two strings

Output:
Returns an integer value (representing the difference between the character)

Explanation:
Basically just iterating through the first 'n' byte and compare each character
in the string
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	us1;
	unsigned char	us2;

	while (n-- > 0)
	{
		us1 = *(unsigned char *)s1++;
		us2 = *(unsigned char *)s2++;
		if (us1 != us2)
		{
			return (us1 - us2);
		}
		if (us1 == '\0')
		{
			return (0);
		}
	}
	return (0);
}
