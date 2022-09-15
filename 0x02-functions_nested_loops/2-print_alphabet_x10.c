#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Returns: void
 */
void print_alphabet_x10(void)
{
	char l, i;

	for (i = 0 ; i <= 9 ; i++)
	{

		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}

}
