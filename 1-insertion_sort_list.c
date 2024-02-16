#include "sort.h"
/**
 * insertion_sort_list - This Sorts a doubly linked list of integers
 * using the insertion sort algorithm process.
 * @list: A pointer that point to  head of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list) {
    listint_t *current;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next;

    while (current != NULL) {
        listint_t *temp = current->prev;
        listint_t *next_node = current->next;

        while (temp != NULL && temp->n > current->n) {
            temp = temp->prev;
        }

        if (temp == NULL) {
            current->prev->next = next_node;
            if (next_node != NULL)
                next_node->prev = current->prev;
            current->prev = NULL;
            current->next = *list;
            (*list)->prev = current;
            *list = current;
        } else {
            if (temp->next != current) {
                temp->next->prev = current;
                temp->prev->next = current;
                current->prev->next = next_node;
                if (next_node != NULL)
                    next_node->prev = current->prev;
                current->prev = temp->prev;
                temp->prev = current;
                current->next = temp;
            }
        }

        print_list((const listint_t *)*list);
        current = next_node;
    }
}

