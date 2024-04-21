/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:51:21 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 14:51:21 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Deletes and frees the given node and every successor of that node, using the
function 'del' and free(3).
Finally, the pointer to the list must be set to NULL.

Input:
lst: The address of a pointer to a node
del: The address of the function used to delete the content of the node.

Output:
None

Explanation:
Basically deletes all the nodes in the linked list by iterating through the 
list and freeing the memory associated with each node.
1) The function will first check whether the input arguments are valid
pointers
2) After that, the function will enter a loop that keep on looping 
through the list to free the memory associated with each node in the 
input lst.
3) A temporary pointer is first set to point to the current node. It will
then update the head of the list to point to the next node.
4) The del function is then called on the content pointed by 'temp' to free
any memory associated with it.
5) We will then free the memory and set temp to NULL.
6) Repeat
*/

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (lst == NULL || del == NULL)
    {
        return;
    }
    while (*lst)
    {
        t_list *temp = *lst;
        (*lst) = (*lst) -> next;
        del(temp -> content);
        free(temp);
        temp = NULL;
    }
}