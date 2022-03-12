#include <stdio.h>

/**
 * main - reverse alphabet
 *
 * Description: print the alphabet in reverse order.
 * Return: 0 (Successful)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
