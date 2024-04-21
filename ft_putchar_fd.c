/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:58:33 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 11:38:37 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/* Declaring the function header */
/*
Function: 
Outputs the character 'c' to the given file descriptor

Input:
c: The character to output
fd: The file descriptor on which to write

Output:
None
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
