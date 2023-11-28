#include "lists.h"

/**
 * node - it inserts a number into a sorted  list.
 * @head: this is a pointer of the head of the linked list.
 * @number: a number to insert.
 * Author - ahmed awad
 * Return: if it failed it returns NULL.
 *         Or - it returns a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
