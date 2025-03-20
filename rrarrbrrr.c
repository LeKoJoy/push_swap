#include "push_swap.h"

void rra(t_list **stack) {
    if (*stack == NULL || (*stack)->next == NULL)
        return; // Do nothing if stack has 0 or 1 elements

    t_list *prev = NULL;
    t_list *last = *stack;

    // Find the last t_list
    while (last->next) {
        prev = last;
        last = last->next;
    }

    // Move last t_list to the top
    prev->next = NULL; // Remove last t_list from its position
    last->next = *stack; // Make last t_list point to old top
    *stack = last; // Update top of stack
}

void rrb(t_list **stack) {
    rra(stack);
}

void rrr(t_list **stackA, t_list **stackB) {
    rra(stackA);
    rra(stackB);
}
