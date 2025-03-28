#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/*typedef struct s_stack
{
    int data;          // Значение узла
    int index;        // Индекс узла
    int position;     // Положение узла (0 или 1)
    struct s_stack *next; // Указатель на следующий узел
} t_list;*/
/*typedef struct Node {
    int data;
    struct Node *next;
} Node;*/
/**/
typedef struct s_stack
{
    int data;          // Значение узла
    struct s_stack *next; // Указатель на следующий узел
} t_list;*/

void sb(t_list **stack, int is_impostor);
void sa(t_list **stack, int is_impostor);
void ss(t_list **stackA, t_list **stackB);
void ra(t_list **stack);
void rb(t_list **stack);
void rr(t_list **stackA, t_list **stackB);
void pa_pb(t_list **stack_dest, t_list **stack_src, char str);
void rra(t_list **stack);
void rrb(t_list **stack);
void rrr(t_list **stackA, t_list **stackB);

#endif