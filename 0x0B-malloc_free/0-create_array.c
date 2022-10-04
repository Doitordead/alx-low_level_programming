#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * create_array - function that creates an array of chars and initiliazes it
 *	with a specific char
 * @size: store
 * @c: store the
 * Return: return 0
 */

char *create_array(unsigned int size, char c)
{
	char = *array;
	unsigned int = index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (index = 0 ; index < size; index++)
		array[index] = c;
	return (array);
}
