#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed
 * into it
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
