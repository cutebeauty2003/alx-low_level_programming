#include "main.h"

/**
 * swap_int - write a function that swaps the value of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: 0 (Successful)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
