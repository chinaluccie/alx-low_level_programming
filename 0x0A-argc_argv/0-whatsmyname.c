#include <stdio.h>

/**
 * main - serves as start point for program execution
 * @argc: number of commandline arguments
 * @argv: an array of strings each string is a commandline argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
