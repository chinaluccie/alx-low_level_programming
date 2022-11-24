#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: pointer to firts parameter
 * @s2: pointer to second parameter
 *
 * Description - compares string character by character
 *
 * Return: 0 (if same)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			break;
	}

	flag = s1[i] - s2[i];

	return (flag);
}
