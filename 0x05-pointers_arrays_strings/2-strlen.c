#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: the string parameter
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int cnt = 0;

	for (cnt = 0; *s != '\0'; ++s)
	{
		++cnt;
	}

	return (cnt);
}
