#include "main.h"

/**
 * print alphabet_x10 _ prints alphabet letters
 * ten times
 * Description: 
 * Return; no return
 */

void print_alphabet_x10(void)
{
	int cnt = 0;
	int character;

	while (i++ <= 9)
	{
		for ( character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}