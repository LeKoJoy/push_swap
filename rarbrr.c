#include "push_swap.h"

/*void ra(t_list **stack) {
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
}*/

void rotate(t_list **stack)
{
	if (*stack == NULL || (*stack)->next == NULL)
        return;
	t_list *first = *stack;
	t_list *tmp = *stack;
	while(tmp->next)
		tmp = tmp->next;
	*stack = first->next;
	first->next = NULL;
	tmp->next = first;
}

void ra(t_list **stack)
{
	rotate(stack);
	write(1, "ra\n", 3);
}

void rb(t_list **stack) {
    rotate(stack);  // Rotate stack B using the same logic as stack A
	write(1, "rb\n", 3);
}

void rr(t_list **stackA, t_list **stackB) {
    ra(stackA);
    rb(stackB);
	write(1, "rr\n", 3);
}