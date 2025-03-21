#include "push_swap.h"

#include <stdio.h>
#include <stdlib.h>

// Define a structure for stack t_lists
/*typedef struct t_list {
    int data;
    struct t_list *next;
} t_list;*/

// Push an element onto the stack
void push(t_list **top, int value) {
    t_list *newt_list = (t_list *)malloc(sizeof(t_list));
    if (!newt_list) {
        printf("Heap overflow!\n");
        return;
    }
    newt_list->data = value;
    newt_list->next = *top;
    *top = newt_list;
}

// Pop an element from the stack
int pop(t_list **top) {
    if (*top == NULL) {
        printf("Stack underflow!\n");
        return -1;
    }
    t_list *temp = *top;
    int value = temp->data;
    *top = temp->next;
    free(temp);
    return value;
}

// Peek at the top element
int peek(t_list *top) {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return -1;
    }
    return top->data;
}

// Print the stack
void print_stack(t_list *top) {
    printf("Stack: ");
    while (top) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    t_list *stack = NULL;

    push(&stack, 3);
    push(&stack, 6);
    push(&stack, 9);
    print_stack(stack);

    printf("Popped: %d\n", pop(&stack));
    print_stack(stack);

    printf("Top element: %d\n", peek(stack));

    return 0;
}


/*
void push(s_stack **stack, int value)
{
	s_stack new_stack = (s_stack *)malloc(sizeof(s_stack));
	if(!new_stack)
	{
		printf("Memory allocation failure");
		return 0;
	}
	new_stack->data = value;
	new_stack->next = *stack;
	*stack = new_stack;
}

int pop(s_stack **stack)
{
	if(*stack == NULL)
	{
		printf("Stack is empty!")
		return 0;
	}
	s_stack *tmp_s = *stack;
	int value = stack->data;
	stack = stack->next;
	free(tmp_s);
	return value; 
}

int peek(s_stack *stack)
{
	if(stack == NULL)
	{
		printf("Stack is empty!");
		return 0;
	}
	return stack->data;
}

void print_stack(s_stack *stack)
{
	printf("Stack: ");
	while(stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
	printf("\n");
}

int main(void)
{
	//int i = 5;
	//char str[20] = "WTF IS A KOLIMETOR?";

	s_stack *stack = NULL;

	push(&stack, 3);
	push(&stack, 9);
	push(&stack, 6);
	print_stack(stack);

	printf("Pop: %d\n", pop(&stack));
	print_stack(stack);
	printf("Top element: %d\n", peek(stack));
	return 0;
} */