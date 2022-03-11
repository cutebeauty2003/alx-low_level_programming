#include <stdio.h>

/**
 * main - print letters of the alphabet
 *
 * Description - use 'putchar function to print the letters of the alphabet
 * in lower case.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar ('\n');

	return (0);

}
