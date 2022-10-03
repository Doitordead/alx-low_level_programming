#include<stdio.h>
#include<stdlib.h>
#include"main.c"

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: store the number of received arguments
 * @argv: store the pointer of received arguments
 *
 * Return: return 0 if succesd
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}

