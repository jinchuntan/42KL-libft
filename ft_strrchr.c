/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:16:18 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:23:17 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Declaring the library function header */
#include "libft.h"

/*
Function: 
String right-to-left character
Searches for the last occurrence of a specified character in a string.

Input:
str: a pointer to the string to be searched.
c: the character to search for.

Output:
Returns a pointer to the first occurrence of the specified character in the 
string str. If the character is not found, the function returns a null pointer.

Explanation:
1) The first while loop gets the length of the string
2) The next while loop iterates through the string from right to left and finds
the character (c)
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
