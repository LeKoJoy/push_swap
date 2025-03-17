#include "push_swap.h"

void pa(Node **stackA, Node **stackB) {
    if (*stackB == NULL)
        return; // Do nothing if B is empty

    int value = pop(stackB);
    push(stackA, value);
}

void pb(Node **stackA, Node **stackB) {
    if (*stackA == NULL)
        return; // Do nothing if A is empty

    int value = pop(stackA);
    push(stackB, value);
}