/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:11:56 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:21:04 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function: 
Checks whether the character is an ascii character or not.

Input:
a character

Output:
Either a 1 (if the input is an ascii character) or a 0 (any other input)
*/
int	ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
	{
		return (1);
	}
	return (0);
}
