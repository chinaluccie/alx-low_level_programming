#include "main.h"

/**
 * _islower - function used to test for a lowercase letter
 *
 * @c: is the int used as an argument in the fuction
 *
 * Return: 0 (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
