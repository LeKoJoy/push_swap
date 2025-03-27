#include "push_swap.h"

int stack_size(t_list *stack)
{
    int size = 0;
    t_list *current = stack;

    while (current)
    {
        size++;
        current = current->next;
    }
    return size;
}

int list_sorted(t_list *stack)
{
    if (!stack || !stack->next) // Если стек пуст или содержит только один элемент
        return 1; // Считаем его отсортированным

    t_list *current = stack;

    while (current->next)
    {
        if (current->data > current->next->data)
            return 0; // Если текущий элемент больше следующего, стек не отсортирован
        current = current->next;
    }
    return 1; // Все элементы отсортированы
}

t_list *find_max(t_list *stack)
{
    if (!stack)
        return NULL;

    t_list *max_node = stack;
    int max_value = stack->data;

    t_list *current = stack->next;

    while (current)
    {
        if (current->data > max_value)
        {
            max_value = current->data;
            max_node = current;
        }
        current = current->next;
    }
    return max_node;
}

int get_max_bits(t_list *stack)
{
    t_list *max_node = find_max(stack);
    if (!max_node)
        return 0;

    int max_value = max_node->data;
    int bits = 0;

    while (max_value >> bits)
        bits++;

    return bits;
}