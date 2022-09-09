#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * Description:
 *
 * Return: return 0 (succes)
 */

int main(void)
{
	char character = 'z';

	/* satrting of my code*/
	while (character <= 'a')
	{
		putchar(character);
			++character;
	}
	putchar('\n');

	return (0);
}
