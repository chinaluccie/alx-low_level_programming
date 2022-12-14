#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @size: size of array
 * @action: pointer to function
 * @array: array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < (int)size ; i++)
		action(array[i]);
}
