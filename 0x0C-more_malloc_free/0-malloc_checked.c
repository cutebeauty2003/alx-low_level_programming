#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using "malloc".
 * @b: amount of bytes
 * Return: pointer to allocated memory
 * if malloc fails, return value should be equal 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
