#include "main.h"
#include <stdio.h>

/**
 *swap_int - function that swaps the values of two integers
 *
 * @a: first interger parameter
 * @b: second integer parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
