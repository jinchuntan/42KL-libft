/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:06:22 by jintan            #+#    #+#             */
/*   Updated: 2023/04/28 23:06:22 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function: 
Iterates the list (lst) and applies the function 'f' on the content of each
node

Input:
lst: The address of a pointer to a node
f: The address of the function used to iterate on the list

Output:
None

Explanation:
Basically applies a given function (f) to each node in a linked list.
1) Checks if the input argument 'lst' and 'f' are valid pointers. If either
one of them is NULL, just return (do nothing)
2) The function will then enter a while loop (while lst is not NULL) and
apply the function,f to the content of the current node, processing the 
node before moving on to the next node by updating the pointer
*/

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL || f == NULL)
    {
        return ;
    }
    while (lst != NULL)
    {
        f(lst -> content);
        lst = lst -> next;
    }
}