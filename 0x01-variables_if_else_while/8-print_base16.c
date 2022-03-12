#include <stdio.h>

/**
 * main - print base 16.
 *
 * Description: print all numbers of base 16 in lowercase.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char d;
	int i;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
