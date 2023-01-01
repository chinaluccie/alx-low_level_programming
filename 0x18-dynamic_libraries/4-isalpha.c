#include "main.h"

/**
 * _isalpha - function checks for alphabets in lower and uppercase
 *
 * @c: is the int used in the function's argument
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
