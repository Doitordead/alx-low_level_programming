#include<stdio.h>
#include<stdlib.h>
#include<main.h>

/**
 * main- a programme that print the umber of arguments passed into it
 *
 * @argc: argument that store the number of argument passed to it
 * @argv: argument that store the array of the
 *
 * Return: return 0 if (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != "\n")
	{
		i++;
	}
	printf("%d\n", i);

	return (0);
}
