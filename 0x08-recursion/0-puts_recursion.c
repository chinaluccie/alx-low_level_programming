#include "main.h"

/**
 * _puts_recursion - printsa string
 * @s: string input
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
