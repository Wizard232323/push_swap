

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include "libft/libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

# define TRUE 1
# define FALSE 0

void    rotate(t_list **list);
void    swap(t_list **a);
void    pb(t_list **a, t_list **b);
void    pa(t_list **a, t_list **b);
void    sa(t_list **a);
void    sb(t_list **b);
void    ss(t_list **a, t_list **b);
void    ra(t_list **a);
void    rb(t_list **b);
void    rr(t_list **a, t_list **b);
void    rra(t_list **a);
void    rrb(t_list **b);
void    rrr(t_list **a, t_list **b);
int     check_isdigit(int ac, char **av);
int     stack_nbr(int ac, char **av, t_list **a);
int     check_doubles(t_list *head);
void    order_content(t_list **a);
void    set_index(t_list **a);
void    reorder_content(t_list **a);
void    sort_three_element(t_list **a);
void    sort_four_element(t_list **a, t_list **b, int ac);
//void    sort_five_element(t_list **a, t_list **b);
int     is_good(t_list **head_a);

#endif
