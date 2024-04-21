/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:30:38 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:19:33 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function: 
Checks whether the argument passed is an alphanumeric character (alphabet or 
number)

Input:
a character

Output:
Either a 1 (if the input is an alphabet or a number) or a 0 (any other input)
*/

int	ft_isalnum(int character)
{
	if ((character >= '0' && character <= '9')
		|| (character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
	{
		return (1);
	}
	return (0);
}
