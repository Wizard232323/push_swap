/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:39:26 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/02/29 22:51:31 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

void    ra(t_list **a)
{
    rotate(a);
    ft_printf("ra\n");
}

void    rb(t_list **b)
{
    rotate(b);
    ft_printf("rb\n");
}

void    rr(t_list **a, t_list **b)
{
    rotate(b);
    rotate(a);
    ft_printf("rb\n");
}
