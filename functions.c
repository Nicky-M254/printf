#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_str - prints strings to stdout
 * @s: the string to be printed
 *
 * Return: Number of characters printed
 */
int op_str(char *s)
{
	int i = 0;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (i);
}

/**
 * op_char - prints/converts characters, %d and %i
 * @s: the arugment to work with
 *
 * Return: The number of characters printed
 */
int op_int(char *ptr)
{
	long unsigned int i = 0;

/*	char *op_ptr;*/

	if (ptr != NULL)
	{
/*		op_ptr = (int *)malloc(sizeof(int) * strlen(ptr));
		op_ptr = (int *)ptr;*/

		i = 0;
		while (i <= strlen(ptr))
		{
			_putchar(ptr[i] % 10 + '0');
			i++;
		}
	}
	return (i);
}
