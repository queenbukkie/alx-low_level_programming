#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list
 * @head: points to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *j;

	j = malloc(sizeof(listint_t));
	if (!j)
		return (NULL);

	j->n = n;
	j->next = *head;
	*head = j;

	return (j);
}
