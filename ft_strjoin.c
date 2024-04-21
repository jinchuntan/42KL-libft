/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:31:13 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:21:13 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Concatenate s1 and s2 to out_str

Input:
s1: The pointer to the first string
s2: The pointer to the second string
out_str: the pointer to the output string

Output:
out_str: The pointer to the output string
*/

static char	*ft_join_strings(char const *s1, char const *s2, char *out_str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		out_str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		out_str[j] = s2[i];
		i++;
		j++;
	}
	out_str[j] = '\0';
	return (out_str);
}

/*
Function: 
Allocates (with malloc(3)) and returns a new string, which is the result of the 
concatenation of 's1' and 's2'.

Input:
s1: The prefix string
s2: The suffix string

Output:
The new string
NULL if the allocation fails
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!s1 || !s2)
	{
		return (NULL);
	}
	if (res == NULL)
	{
		return (NULL);
	}
	ft_join_strings(s1, s2, res);
	return (res);
}
