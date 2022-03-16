#include "main.h"

/**
 * times_table - a function that prints the nine times table
 * Return: times table for 9
 */
void times_table(void)
{
	int i, c, d;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (i * c);
		if ((d / 10) > 0)
		{
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
		        _putchar((d % 10) + '0');
		if (c < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

		_putchar('\n');

	}
}
