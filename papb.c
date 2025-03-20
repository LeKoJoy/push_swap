#include "push_swap.h"

void pa(t_list **stackA, t_list **stackB) {
    if (*stackB == NULL)
        return; // Do nothing if B is empty

    int value = pop(stackB);
    push(stackA, value);
}

void pb(t_list **stackA, t_list **stackB) {
    if (*stackA == NULL)
        return; // Do nothing if A is empty

    int value = pop(stackA);
    push(stackB, value);
}