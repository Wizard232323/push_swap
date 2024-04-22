/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:39:49 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/02/19 17:42:40 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-') || (c == '+'))
		return (1);
	return (0);
}

int check_isdigit(int ac, char **av)
{
    int i;
    int j;

    i = 1;
 
    while (ac > 1)
    {   
        j = 0;
        while (av[i][j])
        {
            if (!ft_isdigit(av[i][j]))
                return (0);
            j++;
        }
        i++;
        ac--;
    }
    return (1);
}


int stack_nbr(int ac, char **av, t_list **a)
{
    int     i;
    long    n;
    t_list  *new;

    i = 1;
    
    while (i < ac)
    {
        n = ft_atoi(av[i]);
        if (n == __LONG_MAX__)
            return (0);
        new = ft_lstnew(n, i);
        ft_lstadd_back(a, new);    
        i++;
    }
    return (1);
}

int check_doubles(t_list *head)
{
    t_list *first;
    t_list *second;
    first = head;

    while (first)
    {
        second = first->next;
        while (second)
        {
            if (first->content == second->content)
                return (0);
            second = second->next;      
        }
        first = first->next;
    }
    return (1);
}
