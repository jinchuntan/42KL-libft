/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:18:03 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:24:16 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Checks whether the character is a printable character or not.

Input:
a character

Output:
Either a 1 (if the input is a printable character) or a 0 (any other input)
*/
int	ft_isprint(int character)
{	
	if (character >= 32 && character <= 126)
	{
		return (1);
	}
	return (0);
}
