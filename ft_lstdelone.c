/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:51:25 by jintan            #+#    #+#             */
/*   Updated: 2023/04/12 14:51:25 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "libft.h"

/*
Function:
lstdelone = list delete one
Takes as a parameter a node and frees the memory of the node's content using 
the function 'del' given as a parameter and free the node. The memory of 
'next' must not be freed.

Input:
lst: The node to free
del: The address of the function used to delete the content

Output:
None

Explanation:
Basically deletes a single node from a linked list by freeing the memory
associated with it.
1) Checks whether the input argument lst and del are valid pointers
2) Call the del function on the content of the input node and free
any memory associated with it.
3) Set lst to NULL

NOTE: Setting lst to NULL is not neccesary but it can help to prevent
errors in code that relies on the pointer lst. It may also result in
memory leaks.
*/

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL || del == NULL)
    {
        return ;
    }
    del(lst -> content);
    free(lst);
    lst = NULL;
}