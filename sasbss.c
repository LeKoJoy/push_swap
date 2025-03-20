#include "push_swap.h"

void sa(t_list **stack, int is_impostor) {
    if (*stack == NULL || (*stack)->next == NULL)
        return; // Do nothing if stack has 0 or 1 elements

    t_list *first = *stack;
    t_list *second = first->next;

    // Swap the first two t_lists
    first->next = second->next;
    second->next = first;
    *stack = second;
    if (!is_impostor)
        write(1, "sa\n", 3);
}

void sb(t_list **stack, int is_impostor) {
    if (*stack == NULL || (*stack)->next == NULL)
        return; // Do nothing if stack has 0 or 1 elements

    t_list *first = *stack;
    t_list *second = first->next;

    // Swap the first two t_lists
    first->next = second->next;
    second->next = first;
    *stack = second;
    if (!is_impostor)
        write(1, "sa\n", 3);
}

void ss(t_list **stackA, t_list **stackB) {
    sa(stackA, 1);  // Swap the first two elements of stack A
    sa(stackB, 1);  // Swap the first two elements of stack B
    write(1, "ss\n", 3);
}