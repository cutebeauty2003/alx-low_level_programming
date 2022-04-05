#include <stdio.h>
#include <stdlib.h>

/**
 * main - a number that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: arraythat contains the program command line arguments
 * Return: Success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
