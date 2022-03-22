#include "main.h"

/**
 * _strlen - write a script that returns the length of a string
 * @s: integer used
 * Return: 0 (Successful)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
