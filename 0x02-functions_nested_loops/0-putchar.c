#include "main.h"

/**
 * main -Entry point
 *
 * Description:
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char message[9] = "_putchar";
	int i;

	for ( i = 0; i < 8; i++)
	{
		putchar(message[i]);
	}

	putchar("\n");

	return (0);
}

