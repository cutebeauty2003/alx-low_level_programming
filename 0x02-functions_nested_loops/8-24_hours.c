#include "main.h"

/**
 * jack_bauer - print time
 *
 * Description: print time in 24 hours
 * Return: 0 (Successful)
 */
void jack_bauer(void)
{
	int i, d;
	for (i = 0; i < 24; i++)
	{
		for (d = 0; d < 60; d++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(d / 10 + 48);
			_putchar(d % 10 + 48);
			_putchar('\n');
		}
	}
}
