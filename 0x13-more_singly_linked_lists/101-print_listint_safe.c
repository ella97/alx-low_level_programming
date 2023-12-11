#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_new_node = NULL;
	const listint_t *the_new_node = NULL;
	size_t counter = 0;
	size_t new_n;

	current_new_node = head;
	while (current_new_node)
	{
		printf("[%p] %d\n", (void *)current_new_node, current_new_node->n);
		counter++;
		current_new_node = current_new_node->next;
		the_new_node = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (current_new_node == the_new_node)
			{
				printf("-> [%p] %d\n", (void *)current_new_node, current_new_node->n);
				return (counter);
			}
			the_new_node = the_new_node->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}

