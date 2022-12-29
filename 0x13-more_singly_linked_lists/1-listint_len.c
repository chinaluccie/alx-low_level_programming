#include "lists.h"
#include <stddef.h>

/**
 * listint_len - lists number of elements
 * @h: pointer to head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}

	return (counter);
}
