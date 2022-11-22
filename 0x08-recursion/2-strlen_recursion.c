#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string input
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);

	}

	return (len);
}
