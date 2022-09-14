#include "main.h"
/**
 * print_alphabet_x10 - print tens times
 * the alphabet
 * Description: nananaa
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int cnt = 0;
	int character;

	while (cnt++ <= 9)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
