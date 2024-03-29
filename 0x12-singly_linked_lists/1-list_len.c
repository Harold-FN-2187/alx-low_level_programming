#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements
 * in a singly linked list
 * @h: singly linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t num_element = 0;
const list_t *current = h;
while (current != NULL)
{
current = current->next;
num_element++;
}
return (num_element);
}

