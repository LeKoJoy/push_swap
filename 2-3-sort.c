#include "push_swap.h"

void sort_two(t_list **stack)
{
    int temp1;
    int temp2;
    t_list *tmp_lst;

    tmp_lst = stack;
    temp1 = tmp_lst->data;
    tmp_lst = tmp_lst->next;
    temp2 = tmp_lst->data;
    if (temp1 > temp2)
        sa(stack, 0);
}

void sort_three(t_list  **stack)
{
    int biggest;
    t_list *tmp_lst;

    biggest = tmp_lst->data;
    while(tmp_lst->next != NULL)
    {
        if(biggest > tmp_lst->data)
            biggest = tmp_lst->data;
        tmp_lst = tmp_lst->next;
    }
    if (biggest == (*stack)->data)
        ra(stack);
    else if (biggest == (*stack)->next->data)
        rra(stack);
    sort_two(stack);
}