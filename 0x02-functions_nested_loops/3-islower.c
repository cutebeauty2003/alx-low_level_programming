#include "main.h"

/**
 * _islower - print 1 or 0 depending on lower case
 *
 * Description: print in lowercase
 *
 * Return: 0 (Successful)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
