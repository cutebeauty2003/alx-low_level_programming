#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: int n might be positive or negative
 *
 * Description: return 1, 0 or -1 depending on sign of number
 * Return: 1, 0 or -1
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
