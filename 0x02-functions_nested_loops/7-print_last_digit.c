#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: int
 * Description: pring the last digit of a number
 * Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int r;
	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
}
