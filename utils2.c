/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:39:49 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/04/19 18:52:23 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    order_content(t_list **a)
{
    int tmpcontent;
    int tmpindex;
    t_list  *tmp;
    t_list  *tmp2;
    
    tmp = *a;
    while(tmp->next != NULL)
    {
        tmp2 = tmp->next;
        while(tmp2 != NULL)
        {
            if (tmp->content > tmp2->content)
            {
                tmpcontent = tmp2->content;
                tmpindex = tmp2->index;
                tmp2->content = tmp->content;
                tmp2->index = tmp->index;
                tmp->content = tmpcontent;
                tmp->index = tmpindex;                
            }
            tmp2 = tmp2->next; 
        }    
        tmp = tmp->next;
    }
}

void    set_index(t_list **a)
{
    int     i;
    t_list  *tmp;

    i = 0;
    tmp = *a;

    while(tmp != NULL)
    {
        tmp->content = i;
        i++; 
        tmp = tmp->next; 
    }
}

void    reorder_content(t_list **a)
{
    t_list  *tmp;
    t_list  *tmp2;
    int     tmpcontent;
    int     tmpindex;

    tmp = *a;
    while(tmp->next != NULL)
    {
        tmp2 = tmp->next;
        while(tmp2 != NULL)
        {
            if (tmp->index > tmp2->index)
            {
                tmpcontent = tmp2->content;
                tmpindex = tmp2->index;
                tmp2->content = tmp->content;
                tmp2->index = tmp->index;
                tmp->content = tmpcontent;
                tmp->index = tmpindex;                
            }
            tmp2 = tmp2->next; 
        }    
        tmp = tmp->next;
    }
}

int is_good(t_list **head_a)
{
    t_list *a; 

    a = *head_a;
    while(a && a->next)
    {
        if (a->content > a->next->content)
            return (0);
        a = a->next; 
    }
    return (1);
}

void    sort_three_element(t_list **head_a)
{ 
    int a;
    int b;
    int c;

    a = (*head_a)->content;
    printf("a: %d\n", a);
    b = (*head_a)->next->content;
    printf("b: %d\n", b);
    c = (*head_a)->next->next->content;
    printf("%d\n", c);
    if (a < c && c < b)
    {    
        sa(head_a);
        ra(head_a);
    }
    else if (c < b && b < a)
    {
        sa(head_a);
        rra(head_a);
    }
    else if (c < a && a < b)
        rra(head_a);
    else if (b < c && c < a)
        ra(head_a);
    else if (b < a && a < c)
        sa(head_a);     

}


void    sort_four_element(t_list **head_a, t_list **head_b, int ac)
{
    int i;
    t_list **temp;  

    i = ac;
    temp = head_a; 

    printf("\n\n%d\n\n", (*temp)->content);


    while ((*temp)->content != (ac - 2) /* && (*head_a)->next*/ )
    {
        printf("dans\n");
        ra(temp);
        *temp = (*temp)->next;
    }
    pa(head_a, head_b);
    

    sort_three_element(head_a);
/*
       while (*head_a)
    {
        printf("%d\n",(*head_a)->content);
        (*head_a) = (*head_a)->next;
    }
*/

/*    if ((*head_b)->content == ac)
    {
        printf("ici\n");
        
        while (i)  
        {
            ra(head_a);
            i--;
            printf("in he boucle\n");
        }
        
    }
    */

    
    /*
    if ((*head_b)->content == (ac - 2))                                        // si node B < nb d element 
    {
    //    printf("%d\n", (*head_b)->content);
        pa(head_a, head_b);
        //ra(head_a);
    }
    */

    // while ((*head_a)->content < (*head_a)->next->content)
    // {



    // }

    
    

    
   
  //  while (!is_good(head_a))
  //      ra(head_a);
    
}

