/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:49:14 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 14:49:14 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function:
Adds the node 'new' at the beginning of the list

Input:
lst: The address of a pointer to the first link of a list
new: The address of a pointer to the node to be added to the list

Output:
None

Explanation:
Basically adding a new node to the front of a linked list
1) First, it will check whether lst and new are valid pointers
2) The function will then set the 'next' pointer of the new node (new) to 
point to the head of the input list (lst). It will then update the head
of the list to point to the new node 'new'.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
    {
        return;
    }
	new -> next = *lst;
	*lst = new;
}