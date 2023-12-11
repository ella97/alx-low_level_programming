#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
size_t len_n = 0;
int diff;
listint_t *temp;

if (!head || !*head)
return (0);

while (*head)
{
diff = *head - (*head)->next;
if (diff > 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
len_n++;
}
else
{
free(*head);
*head = NULL;
len_n++;
break;
}
}

*head = NULL;

return (len_n);
}

