#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new_node node at a given position in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node should be inserted. Index starts at 0.
 * @n: Data to be stored in the new node.
 * Return: Address of the new node, or NULL if insertion failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *current = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; current && i < idx; i++)
{
if (i == idx - 1)
{
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
else
current = current->next;
}

return (NULL);
}
