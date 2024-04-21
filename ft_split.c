/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:25:15 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 11:25:15 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function:
It counts the number of words in the string 's' that are delimeted by the
character 'c'

Input:
s: A pointer to a string
c: the character that act as the delimiter

Output:
count: the number of words
*/

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s == c && *s)
	{
		s++;
	}
	while (*s)
	{
		while (*s != c && *s)
		{
			s++;
		}
		while (*s == c && *s)
		{
			s++;
		}
		count++;
	}
	return (count);
}

/*
Function:
Basically determines the length of a word in a string

Input:
s: a pointer to a constant char
c: the character itself

Output:
len: The length of the word in a string

*/
static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

/*
Function:
Duplicates the string with a specified maximum length

Input:
s: a pointer to the string to be duplicated
n: the maximum number of characters to duplicate

Output:
pt_strndup: a pointer to the newly created string

Explanation:
First, we allocate memory for the new string
Copy the characters from the input string to the output string.
*/
static char	*ft_strndup(const char *s, size_t n)
{
	char	*pt_strndup;
	size_t	size;

	pt_strndup = malloc(sizeof(char) * (n + 1));
	if (!pt_strndup)
	{
		return (0);
	}
	size = 0;
	while (size < n)
	{
		pt_strndup[size] = s[size];
		size++;
	}
	pt_strndup[size] = '\0';
	return (pt_strndup);
}

/*
Function:
Free the memory allocated for the strings in the array and then free
the memory allocated for the array itself

Input:
s: A pointer to an array of strings
i: an integer

Output:
NULL, after the memory has been deallocated
*/

static char	*ft_arr_free(char **s, int i)
{
	while (i--)
	{
		free(s[i]);
	}
	free(s);
	return (NULL);
}

/*
Function:
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.

Input:
s: The string to be split
c: The delimiter character

Output:
The array of the new strings resulting from the split.
NULL if the allocation fails.
*/

char	**ft_split(char const *s, char c)
{
	char	**pt_split;
	size_t	len;
	size_t	wordlen;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_word_count(s, c);
	pt_split = malloc(sizeof (char *) * (len + 1));
	if (!pt_split)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s && *s == c)
			s++;
		wordlen = ft_word_len(s, c);
		pt_split[i] = ft_strndup(s, wordlen);
		if (!pt_split[i])
			ft_arr_free(pt_split, i);
		s += wordlen;
		i++;
	}
	pt_split[len] = NULL;
	return (pt_split);
}
