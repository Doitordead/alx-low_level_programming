#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string,
 *	in reverse, followed by a new line.
 * @s: parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int ind;

	for (ind = 0; s[ind] != '\0'; ++ind)
	{

	}
	for (--ind; ind >= 0; --ind)
	{
		putchar(s[ind]);
	}
	putchar('\n');

