/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:09:19 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:22:11 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Checks whether the character is a number or not.

Input:
a character

Output:
Either a 1 (if the input is a number) or a 0 (any other input)
*/
int	ft_isdigit(int character)
{
	if (character >= '0' && character <= '9')
	{
		return (1);
	}
	return (0);
}
