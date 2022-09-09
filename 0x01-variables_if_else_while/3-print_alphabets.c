#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- Entry
 *
 * Description:
 *
 * Return: return 0 (Succes)
 */
int main(void)
{
	int i = 0;
	char charUpper = 'A';
	char charLowwer = 'a';

	while (charLowwer <= 'z')
	{
		putchar(charLowwer);
			++putchar;
	}
	while (charUpper <= 'Z')
	{
		putchar(charUpper);
			++putchar;
	}
	putchar('\n');
}
