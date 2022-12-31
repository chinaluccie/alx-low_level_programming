#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function to print names
 * @name: name of a person
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
