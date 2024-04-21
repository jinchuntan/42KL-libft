/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:42:43 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 10:55:06 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/* 	
Function:
Basically converts a string of characters representing an integer value into 
an actual integer value
	
Input:
str which is the pointer to the string of characters that represents the 
integer value to be converted.

Output:
returns the integer value itself.

Explanation & Thought Process:
const char * means that it is a pointer to a constant string of characters
The const keyword indicates that the function should not modify the contents
of the string that 'str' points to. It is considered a good practice.

The first while loop is used to check for the unprintable characters
(ASCII value of 9-13 and the space character (32), basically looping 
through it.)

The if statement checks that if the number is a negative number, the flag
is set to -1. If not, just continue to increment the index

The next if statement checks whether the character falls in between the
ascii value of 48 and 57 (numbers 0-9), if it does, multiply by 10
and add the integer to the result, convert the character digit to
the corresponding numeric value.
*/

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;
	int				negative_flag;

	i = 0;
	result = 0;
	negative_flag = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative_flag = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * negative_flag);
}
