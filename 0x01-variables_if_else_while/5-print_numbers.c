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
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
