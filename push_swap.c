/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:39:49 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/04/19 18:33:35 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list  *a;
    t_list  *b;
    int     i;
    int     j;
    int     split;
    t_list  *tmp;
 //   t_list  *tmp2;
 //   int tmpcontent;
 //   int tmpindex;

    i = 0;
    j = 0;
    split = 0;
    if (ac <= 1 || !av[1][0])
        return (0);
    if (ac == 2)
    {
        av = ft_split(av[1], ' ');
        while (av[i])
            i++;
        ac = i;
        split = TRUE;
    }
    a = NULL;
    b = NULL;
    if (!check_isdigit(ac, av) || !stack_nbr(ac, av, &a) || !check_doubles(a))
        return (printf("error\n"));
        
    order_content(&a);
    set_index(&a);
    reorder_content(&a);
    
                           // verifie si la liste est triee 

/*
    	if (s->a_size == 2 && s->a[0] > s->a[1])
		swap("sa", s->a, s->a_size);
	else if (s->a_size == 3)
		sort_three_elements(s);
	else if (s->a_size >= 4 && s->a_size <= 5)
		sort_four_to_five_elements(s);
	else
		radix_sort(s);

*/
  
/* lecteur 

    while (a)
    {
        printf("%d\n",a->content);
        a = a->next;
    }
*/

    if (!is_good(&a))
    {
        if (ac == 3)
            sa(&a);
        if (ac == 4)
            sort_three_element(&a);
        if (ac == 5)
            sort_four_element(&a, &b, ac);
//       if (ac == 6)
//            sort_five_element(&a, &b);
        if (is_good(&a))
            printf("C est trie\n");
        return (0); 
    }    
    else
    { 
        printf("good job !\n");
        return (0);
    }
    


/**

    if (ac == 2 && av[0] > av[1])
    {

    }
    else if(ac == 3)
    {
        sort_three_elements
    }
    else if (ac == 5)
    {

    }
    else
        radix_sort();

*/

/*  ZONE DE TEST    */

    tmp = a ;
    while(tmp != NULL)
    {
                 
          printf("%d\n\n", tmp->content);
          tmp = tmp->next;
    }



// zone de test

//    algodetri();
//    free all;    
//    fin du programme;
}
