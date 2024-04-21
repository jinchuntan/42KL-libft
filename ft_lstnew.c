/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:48:24 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 14:48:24 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Allocates (with malloc(3)) and returns a new node.
The member variable 'content' is initialized with the value of the parameter
'content'. The variable 'next' is initialised to NULL.

Input:
content: The content to create the node with

Output:
The new node

Explanation:
1) Allocate the memory for the new t_list element using the malloc function
2) Checked whether the memory allocation has been made successful or not
3) Set the content field of the new t_list element to the value of the
content argument (input)
4) Set the next field to be NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new = malloc(sizeof(*new));
	if (new == NULL)
    {
		return (NULL);
    }
	new -> content = content;
	new -> next = NULL;
	return (new);
}