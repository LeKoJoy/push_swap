#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
    int data;          // Значение узла
    int index;        // Индекс узла
    int position;     // Положение узла (0 или 1)
    struct s_stack *next; // Указатель на следующий узел
} t_list;
/*typedef struct Node {
    int data;
    struct Node *next;
} Node;*/

#endif