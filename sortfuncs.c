#include "push_swap.h"

void    sort_two(t_list **stack)
{
    if ((*stack)->data > (*stack)->next->data)
        sa(stack);
}

void    sort_three(t_list **stack)
{
    int a = (*stack)->data;
    int b = (*stack)->next->data;
    int c = (*stack)->next->next->data;
    
    if (a > b && b < c && a < c)
        sa(stack);
    else if (a > b && b > c)
    {
        sa(stack);
        rra(stack);
    }
    else if (a > b && b < c && a > c)
        ra(stack);
    else if (a < b && b > c && a < c)
    {
        sa(stack);
        ra(stack);
    }
    else if (a < b && b > c && a > c)
        rra(stack);
}
/*
int     find_smallest_position(t_list *stack)
{
    t_list  *current = stack;
    int     pos = 0;
    int     i = 0;
    int     min_data = stack->data;
    
    while (current)
    {
        if (current->data < min_data)
        {
            min_data = current->data;
            pos = i;
        }
        current = current->next;
        i++;
    }
    return (pos);
}

void    push_smallest_to_b(t_list **stackA, t_list **stackB, int size)
{
    int pos = find_smallest_position(*stackA);
    if (pos == 1)
        sa(stackA);
    else if (pos > 1 && pos <= size / 2)
        while (pos-- > 0)
            ra(stackA);
    else
        while (pos++ < size)
            rra(stackA);
    pb(stackA, stackB);
}*/

void    sort_four(t_list **stackA, t_list **stackB)
{
    push_smallest_to_b(stackA, stackB, 4);
    sort_three(stackA);
    pa(stackA, stackB);
}

void    sort_five(t_list **stackA, t_list **stackB)
{
    push_smallest_to_b(stackA, stackB, 5);
    push_smallest_to_b(stackA, stackB, 4);
    sort_three(stackA);
    pa(stackA, stackB);
    pa(stackA, stackB);
}
