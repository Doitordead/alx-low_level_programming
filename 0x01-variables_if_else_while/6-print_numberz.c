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
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		++number;
	}
	putchar('\n');

	return (0);
}
