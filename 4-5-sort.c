#include "push_swap.h"

t_list *find_min(t_list *stack)
{
    long min = LONG_MAX;         // Инициализация максимальным значением
    t_list *min_node = NULL;    // Указатель на узел с минимальным значением
    t_list *current = stack;    // Временный указатель для обхода стека

    if (!stack)
        return NULL;

    while (current) // Проходим по всему стеку
    {
        if (current->data < min) // Если текущее значение меньше текущего минимума
        {
            min = current->data;      // Обновляем минимум
            min_node = current;      // Запоминаем узел с минимальным значением
        }
        current = current->next; // Переходим к следующему узлу
    }

    return min_node; // Возвращаем указатель на узел с минимальным значением
}

// Функция для перемещения узла в верхнюю позицию стека
void move_to_top(t_list **stack, t_list *node, char stack_name)
{
    int pos = node->position; // Предполагаем, что position уже вычислено
    if (pos == 1) // Узел уже сверху
        return;

    if (pos <= stack_size(*stack) / 2) // Ближе к началу
    {
        while (*stack != node)
            ra_rb(stack, stack_name);
    }
    else // Ближе к концу
    {
        while (*stack != node)
            rra_rrb(stack, stack_name);
    }
}

// Функция для сортировки 4 чисел
void sort_four(t_list **stack_a, t_list **stack_b)
{
    // Находим наименьшее число
    t_list *min_node = find_min(*stack_a);

    // Перемещаем его в верхнюю позицию
    move_to_top(stack_a, min_node, 'a');

    // Перемещаем наименьшее число в stack_b
    pa_pb(stack_b, stack_a, 'b');

    // Сортируем оставшиеся 3 числа
    sort_three(stack_a);

    // Возвращаем наименьшее число обратно в stack_a
    pa_pb(stack_a, stack_b, 'a');
}

// Функция для сортировки 5 чисел
void sort_five(t_list **stack_a, t_list **stack_b)
{
    // Находим два наименьших числа
    t_list *min1 = find_min(*stack_a);
    move_to_top(stack_a, min1, 'a');
    pa_pb(stack_b, stack_a, 'b'); // Перемещаем первое наименьшее число

    t_list *min2 = find_min(*stack_a);
    move_to_top(stack_a, min2, 'a');
    pa_pb(stack_b, stack_a, 'b'); // Перемещаем второе наименьшее число

    // Сортируем оставшиеся 3 числа
    sort_three(stack_a);

    // Возвращаем два наименьших числа обратно в stack_a
    if ((*stack_b)->data > (*stack_b)->next->data)
        sa_sb(stack_b, 'b'); // Сортируем stack_b, если нужно
    pa_pb(stack_a, stack_b, 'a');
    pa_pb(stack_a, stack_b, 'a');
}
