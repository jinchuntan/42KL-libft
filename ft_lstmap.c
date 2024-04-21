/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:51:11 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 14:51:11 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"
/*
Function: 
Iterates the list 'lst' and applies the function 'f' on the content of each 
node. Creates a new list resulting of the successive applications of the 
function 'f'. The 'del' function is used to delete the content of a node if 
needed.

Input:
lst: The address of a pointer to a node
f: The address of the function used to iterate on the list
del: The address of the function used to delete the content of a node if
needed.

Output:
The new list, NULL if the allocation failed

Explanation:
Applies a given function,f to each node in a linked list and create a
new list containing the result.

1) The function checks if the input arguments are valid pointers.
2) It will then declare two new pointers
3) The function will then enter a while loop that iteratively applies
the function,f to each node in the input list, creating a new node
If the new node created is NULL, it will be cleared
If the new node is created successfully, the function adds the new node
to the new list and update the pointer lst to point to the next node in
the input list.
*/

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
    if (lst == NULL || f == NULL || del == NULL)
    {
        return NULL;
    }
    
    t_list *new_list = NULL;
    t_list *new_node = NULL;
    
    while (lst != NULL)
    {
        new_node = ft_lstnew(f(lst -> content));
        if (new_node == NULL)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst -> next;
    }
    
    return new_list;
}