#include <stdio.h>

/**
 * main - print all possible
 * Description: print all possible combination of
 * single digits numbers.
 * Return: 0 (Successful)
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
		if (d < 9)
		{
			putchar(44);
			putchar(32);
		}
		d++;
	}
	putchar('\n');

	return (0);
}
