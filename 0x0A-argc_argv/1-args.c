#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * main- a programme that print the umber of arguments passed into it
 *
 * @argc: argument that store the number of argument passed to it
 * @argv: argument that store the array of the
 *
 * Return: return 0 if (success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
