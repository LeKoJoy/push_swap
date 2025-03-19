#include "push_swap.h"

void sa(Node **stack) {
    if (*stack == NULL || (*stack)->next == NULL)
        return; // Do nothing if stack has 0 or 1 elements

    Node *first = *stack;
    Node *second = first->next;

    // Swap the first two nodes
    first->next = second->next;
    second->next = first;
    *stack = second;
}

void sb(Node **stack) {
    if (*stack == NULL || (*stack)->next == NULL)
        return; // Do nothing if stack has 0 or 1 elements

    Node *first = *stack;
    Node *second = first->next;

    // Swap the first two nodes
    first->next = second->next;
    second->next = first;
    *stack = second;
}

void ss(Node **stackA, Node **stackB) {
    sa(stackA);  // Swap the first two elements of stack A
    sa(stackB);  // Swap the first two elements of stack B
}