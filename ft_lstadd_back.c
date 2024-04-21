/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:50:07 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 14:50:07 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Adds the node 'new' at the end of the list

Input:
lst: The address of a pointer to teh first link of a list.
new: The address of a pointer to the node to be added to the list

Output:
None

Explanation:
1) The function will first check if the input argument 'lst' and 'new' are 
valid pointers
2) If the input list is empty, the function sets the head of the list to
point to the new node 'new'.
3) If the input list is not empty, it will traverse the list using a
temporary pointer (temp) until it reaches the last node. It will set
the 'next' pointer of the last node to point to the new node 'new'.
*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
    {
        return;
    }
    if (*lst == NULL)
    {
        *lst = new;
    }
    else
    {
        t_list *temp = *lst;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = new;
    }
}