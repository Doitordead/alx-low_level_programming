#include "main.h"

/*
 *
 * main
 *
 * Description:
 *
 * Return
 */

void print_alphabet()
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar (character);
	}

	_putchar('\n');
	return (0);
}