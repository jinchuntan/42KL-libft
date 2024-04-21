/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:52:21 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:16:51 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function: 
Checks whether the character is an alphabet or not.

Input:
a character

Output:
Either a 1 (if the input is an alphabet) or a 0 (any other input)
*/
int	ft_isalpha(int character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
	{
		return (1);
	}
	return (0);
}
