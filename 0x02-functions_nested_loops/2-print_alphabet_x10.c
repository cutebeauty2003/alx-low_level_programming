#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: print alphabet 10 times
 *
 * Return: 0 (Successful)
 *
 */
void print_alphabet_x10(void)
{
	int d = 0;

	while (d < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		d++;
		_putchar('\n');
	}
}
