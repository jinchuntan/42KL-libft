/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:31:40 by jintan            #+#    #+#             */
/*   Updated: 2023/04/07 12:31:40 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function:
Calculates the starting index of the first-non trimmed character of a string
's1' by comparing it to a set of character 'set'

Input:
s1: The string that is being trimmed 
set: The set of characters that are being trimmed from the string (All
characters in the 'set' are removed from the beginning and end of the string
)

Output:
start variable which contains the index of the first non-trimmed character

Explanation:
The while loop iterates over the characters in the string 's1' until it
reaches a non-trimmed character.
*/
static int	ft_calc_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (start < (int)ft_strlen((char *)s1))
	{
		if (!ft_strchr(set, s1[start]))
		{
			break ;
		}
		start++;
	}
	return (start);
}

/*
Function:
Calculates the ending of the index of the last-non trimmed character

Input:
s1: A pointer to a string
set: A pointer to another string

Output:
The end variable, whcih containes the index of the last non-trimmed
characters

Explanation:
The while loop iterates over the characters in the string 's1' from the
end towards the beginning until it reaches a non-trimmed
character.
*/
static int	ft_calc_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen((char *)s1) - 1;
	while (end > 0)
	{
		if (!ft_strchr(set, s1[end]))
		{
			break ;
		}
		end--;
	}
	return (end);
}

/*
Function:
Allocates (with malloc(3)) and returns a copy of 's1' with the characters
specified in 'set' removed from the beginning and the end of the string.

Input:
s1: The string to be trimmed
set: The reference set of characters to trim

Output:
The trimmed string.
NULL if the allocation fails.

Explanation:
1) Check to see if set string is NULL or not
2) The next if statement checks if the s1 string is NULL. If it is, the
function allocates memory for a new string with a length of 1 and sets its 
only character to the NULL Character
3) Call the two static function to get the starting and ending index of the
non-trimmed portion of the string
4) The subsequent if statement will check if the starting index is greater
than the ending index or not. If it is, the function will allocate 
memory for a new string with a length of 1 and sets it only character
to the null character.
5) Finally, it will allocate memory for a new string and copy the 
non-trimmed portion of the s1 string into the new string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!set)
		return (NULL);
	if (!s1)
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	end = ft_calc_end(s1, set);
	start = ft_calc_start(s1, set);
	if (start > end)
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	res = malloc((end - start + 1 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (char *)&s1[start], end - start + 1 + 1);
	return (res);
}
