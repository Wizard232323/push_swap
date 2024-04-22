/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:09:26 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/02/29 23:59:10 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"
/*
void    rotate(t_list **list)
{
    t_list *temp;
    t_list *temp2;

    temp = *list;
    temp2 = (*list)->next;
    while((*list)->next != NULL)
        *list = (*list)->next;
    (*list)->next = temp;
    temp->next = NULL;
    *list = temp2;  
}
*/
void    reverse_rotate(t_list **list)
{
    t_list *temp;
    t_list *temp2;

    temp = *list;
    temp2 = (*list)->next;
    while((*list)->next != NULL)
        *list = (*list)->next;
    (*list)->next = temp;
    temp->next = NULL;
    *list = temp2;
     
}
void    rra(t_list **a)
{
    reverse_rotate(a);
    ft_printf("rra\n");
}

void    rrb(t_list **b)
{
    reverse_rotate(b);
    ft_printf("rrb\n");
}

void    rrr(t_list **a, t_list **b)
{
    reverse_rotate(b);
    reverse_rotate(a);
    ft_printf("rrr\n");
}
