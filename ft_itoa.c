/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:24:58 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:26:54 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Takes an integer n and calculates the number of digits in the integer.

Input:
An integer n

Output:
The total number of digits in the integer.

Explanation:
res (result) is used to keep track of the total number of digits in a number
If n is a negative number, multiply by -1 and increment res by 1

If n is zero, return 1. Since 0 is only 1 digit.

If not, it goes into a loop that divides the number by 10 and increment res
until n is less than or equal to zero

We will declare the function as static as the function has internal 
linkage, meaning that the function is only visible in the current source
file and invisible in other parts of the program. (PDF asked us to do this)

Unsigned int is used to avoid potential issues related to integer overflow
or sign extension. The value will always be non-negative and any overflow
during the arithmetic operation will wrap around to 0.
*/
static int	ft_cal_number_digits(int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		res++;
		n *= -1;
	}
	else if (n == 0)
	{
		return (1);
	}
	while ((unsigned int)n > 0)
	{
		res++;
		n = (unsigned int)n / 10;
	}
	return (res);
}

/*
Function: 
Takes an integer n as input and converts it into a string of characters
representing the decimal equivalent of the input integer

Input:
An integer - n

Output:
Returns the pointer to the allocated string of characters or 'NULL' if
the allocation fails

Explanation & Thought Process:
If the first integer is 0, the first character of the string should be
'0'.

If the memory allocation failed, return NULL.

If the number has a negative value, add a negative sign and make the number+
Convert the integer to a string by going through each digit from right to
left
Convert the digit to ASCII value and store the value in res
Divide the number by 10 to get the next digit 
Decrement the number of digits

*/
char	*ft_itoa(int n)
{
	char	*res;
	int		num_digits;

	num_digits = ft_cal_number_digits(n);
	res = malloc((num_digits + 1) * sizeof(char));
	if (n == 0)
		res[0] = 48;
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[num_digits] = '\0';
	while ((num_digits - 1) >= 0 && (unsigned int)n > 0)
	{	
		res[num_digits - 1] = ((unsigned int)n % 10) + '0';
		n = (unsigned int)n / 10;
		num_digits--;
	}
	return (res);
}
