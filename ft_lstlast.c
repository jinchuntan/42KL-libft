/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:49:44 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 14:49:44 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function:
Returns the last node of the list

Input:
lst: The beginning of the list

Output:
Last node of the list

Explanation:
Finds the last node in a linked list by iterating through the list until the
last node is achieved.
1) Checks if the input argument is NULL or not
2) Enters a while loop that updates the pointer to the next node until the
last node is reached.
*/

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
    {
        return NULL;
    }
    while (lst -> next != NULL)
    {
        lst = lst -> next;
    }
    return lst;
}