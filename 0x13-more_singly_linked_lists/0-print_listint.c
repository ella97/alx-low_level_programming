#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node_count++;
}

return (node_count);
}
