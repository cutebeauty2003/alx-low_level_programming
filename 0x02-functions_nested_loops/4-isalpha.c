#include "main.h"

/**
 * _isalpha - If character is uppercase or lowercase
 * @c: type int c
 *
 * Description: return 1 if its upper or lowercase or
 * return 0 otherwise
 *
 * Return: 1 if its in a case
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
