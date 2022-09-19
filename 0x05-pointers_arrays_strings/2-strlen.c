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
	int c = 0;

	c = strlen(*s);

	return (c);
}
