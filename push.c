/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:51:26 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/04/19 18:32:30 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    pa(t_list **a, t_list **b)
{
    t_list *new;
    if(*b != NULL)
    {
        new = (*b)->next;
        (*b)->next = *a;
        *a = *b;
        (*b) = new; 
        ft_printf("pa\n");
    }
}

void    pb(t_list **a, t_list **b)
{   
    t_list  *new;
    if (*a != NULL)
    {
        new = (*a)->next;
        (*a)->next = *b;
        *b = *a;
        (*a) = new; 
        ft_printf("pb\n");
    }      
}
/*
void    kdo_rotate(t_list **list)
{
    t_list *end;

    end = *list;
    while(end->next != NULL)
        end = end->next;
    end->next = *list;
    *list = (*list)->next;
    end->next->next = NULL;
    (*list)->next = NULL;
}

int main(void)
{
    t_list  *tmp;
    t_list *a;
    t_list *b;
    t_list *c;

    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));
    c = malloc(sizeof(t_list));

    printf("start\n");
    a->content = 12;
    b->content = 5;
    c->content = 50;
    a->next = b;
    b->next = c;
    c->next = NULL;
    tmp = a;
    while(tmp != NULL)
    {   
        printf("%d\n", tmp->content);
        tmp = tmp->next;
    }
    printf("middle\n");
    rotate(&a);
    tmp = a;
    while(tmp != NULL)
    {   
        printf("%d\n", tmp->content);
        tmp = tmp->next;
    }
    printf("end\n");

}
*/

