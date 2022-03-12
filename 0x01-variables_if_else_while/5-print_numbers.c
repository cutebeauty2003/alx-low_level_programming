#include <stdio.h>

/**
 * main - print digits
 *
 * Description: Print single digits numbers of base '10' starting from '0'
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		printf("%c", c);
	}
	putchar('\n');

	return (0);
}
