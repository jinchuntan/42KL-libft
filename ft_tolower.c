/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:26:51 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 12:13:41 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/* Checking whether a character is an uppercase character and 
 * convert it to an lowercase character (tolower()) */
/*
Function: 
Checking whether a character is an uppercase character and convert it to a
lowercase character

Input:
a character (character)

Output:
a lowercase letter (if the input character is a lowercase letter). If not, 
the same character
*/

int	ft_tolower(int character)
{
	if (character >= 'A' && character <= 'Z')
	{
		return (character + 32);
	}
	return (character);
}