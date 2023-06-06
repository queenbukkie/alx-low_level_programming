#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: points to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t;
	listint_t *temp = *head;

	t = malloc(sizeof(listint_t));
	if (!t)
		return (NULL);

	t->n = n;
	t->next = NULL;

	if (*head == NULL)
	{
		*head = t;
		return (t);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = t;

	return (t);
}
