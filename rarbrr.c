#include "push_swap.h"

void ra(t_list **stack) {
    if (*stack == NULL || (*stack)->next == NULL)
        return; // Do nothing if stack has 0 or 1 elements

    t_list *first = *stack;
    t_list *last = *stack;

    // Find the last t_list
    while (last->next)
        last = last->next;

    // Move first t_list to the last
    *stack = first->next; // Update top of stack
    first->next = NULL;
    last->next = first; // Append first t_list to the end
}

void rb(t_list **stack) {
    ra(stack);  // Rotate stack B using the same logic as stack A
}

void rr(t_list **stackA, t_list **stackB) {
    ra(stackA);
    rb(stackB);
}