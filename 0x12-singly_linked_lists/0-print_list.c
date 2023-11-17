#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of singly linked list
 * @h: singly linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
int counter = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%i] %s\n", h->len, h->str);
h = h->next;
counter++;
}
return (counter);
}
