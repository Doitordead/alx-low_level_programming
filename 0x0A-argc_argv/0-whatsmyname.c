#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * main-a program that prints its name
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always = (success)
*/

int main (int argc, char *agrv[])
{
	print("%s\n", argv[0]);
	return (0);
}
