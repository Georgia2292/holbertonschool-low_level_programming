#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: an input for the size of the array in int
 * @c: to store the strings of character
 *
 * Return: a pointer to the base character c
 */

	char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	counter = 0;
	while (counter < size)
	{
		ptr[counter] = c;
		counter++;
	}
	return (ptr);
}
