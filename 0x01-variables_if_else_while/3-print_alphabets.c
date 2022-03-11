#include <stdio.h>
/**
 * main - print in lower and uppercase
 *
 * Description: Use 'putchar' to print the alphabet in lowercase and then uppercase
 *
 * Return 0 (Successful)
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
