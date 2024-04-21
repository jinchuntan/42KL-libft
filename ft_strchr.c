/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:49:20 by jintan            #+#    #+#             */
/*   Updated: 2023/04/06 13:49:20 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
String Character
Used to search for the first occurrence of a specified character in a given
string.

Input:
Takes two arguments 
Characters are represented as integers, so the function can be called 
with a character literal as the second argument.
const char s: a pointer to the string to be searched
int c: the character to be searched for

Output:
Returns a pointer to the first occurence of the character 'c' in the string
's' or NULL if the character is not found

Explanation:
We iterate through each character in the string, compares each character to
the character,c and return a pointer to the current character if they match.
If no character c is found, return NULL
*/

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == s[i])
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
