/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:19:52 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:04:55 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function:
Applies the function 'f' to each character of the string 's' and passing its
index as first argument to create a new string (with malloc(3)) resulting 
from successive applications of 'f'.

Input:
s: The string on which to iterate.
f: The function to apply to each character

Output:
The string created from the successive applications of 'f'
Returns NULL if the allocation fails

Explanation:
Basically just loops through the string and apply the function f
to each character in the string 's' and returns a new string
with the result of the function applied to each character
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	res = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
