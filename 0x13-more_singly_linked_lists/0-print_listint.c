#include <stdio.h>
#include "lists.h"
#include <unistd.h>


/**
 * print_listint - prints all the elements
 * @h: head pointer to first node
 *
 * Description: prints all the elements of listint_t
 *
 * Return: number of nodes in h.
 */
size_t print_listint(const listint_t *h)
{

	const listint_t *temp;
	size_t nodes = 0;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;

	}

	return (nodes);
}
