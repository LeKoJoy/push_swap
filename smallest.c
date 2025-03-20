#include "push_swap.h"

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
}