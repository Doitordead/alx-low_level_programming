#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: the parameter
 *
 * Return nothing
 */
void rev_string(char *s)
{
	int i, j;
	char str;

	for (i = 0; s[i] != '\0'; ++i)
	{

	}
	for (j = 0; j < i / 2; ++j)
	{
		str = s[i];
		s[i] = s[i - 1 - i];
		s[i - 1 - i] = str;
	}
}
