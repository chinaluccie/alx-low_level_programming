#include <stdio.h>

/**
 * main - start point of program execution
 * @argc: string count
 * @argv: array of string
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
