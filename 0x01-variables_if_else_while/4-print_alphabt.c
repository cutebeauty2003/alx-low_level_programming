#include <stdio.h>

/**
 * main - print the alphabet in lowercase except 'q' and 'e'
 *
 * Description: print all letters of the alphabet except 'q' and 'e'.
 *
 * Return 0 (Successful)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++,
	}
	putchar('\n');

	return (0);
}
