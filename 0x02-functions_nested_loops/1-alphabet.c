#include "main.h"

/**
 * print_alphabet - function that print alphabet
 * it prints in lowercase
 * Return: no return
 */

void print_alphabet(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar (character);
	}

	_putchar('\n');
}
