#include "main.h"

/**
 * rev_string - wite a functions that reverses a string
 * @s: input string
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (coutnt >= 0)
	{
		if (s[count] = '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}