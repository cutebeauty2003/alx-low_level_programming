#include <stdio.h>

/**
 * main - print numberz
 *
 * Description: print all single digit numberz
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	putchar('\n');

	return (0);
}
