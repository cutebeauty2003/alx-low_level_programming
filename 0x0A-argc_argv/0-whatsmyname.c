#include <stdio.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: number of command line argument
 * @argv: array that contains the program command line arguments
 * Return: Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
