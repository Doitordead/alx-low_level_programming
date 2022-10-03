#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument thast store the numbers of arguments
 * @argv: a char of pointers storing arguments
 * Return: return 0 if succes
 */

int main(int argc, char *argv[])
{
	int res;
	if(argc <= 2)
	{		
		printf("Error\n");

		return (1);
	}

	int i = argv[1];
	int j = argv[2];

	res = 1 * 2;

	printf("%d\n", res);

	return (0);
}
