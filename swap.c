/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:51:26 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/02/29 19:51:44 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_list **a)
{

    t_list  *temp;

    temp = *a;
    if (*a && (*a)->next)
    {
        *a = (*a)->next;
        temp->next = (*a)->next;
        (*a)->next = temp;
    }
}
void    sa(t_list **a)
{
    swap(a);
    ft_printf("sa\n");
}
void    sb(t_list **b)
{
    swap(b);
    ft_printf("sb\n");
}
void    ss(t_list **a, t_list **b)
{
    swap(a);
    swap(b);
    ft_printf("ss\n");
}



