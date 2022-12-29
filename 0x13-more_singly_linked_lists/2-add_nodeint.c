#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - adding node at the beginning
 * @n: integer to add to data
 * @head: contains address of first node
 *
 * Return: address of new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}
