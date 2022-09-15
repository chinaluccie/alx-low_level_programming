#include "main.h"

/**
 * print_alphabet - function that prints lowercase alphabet letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
