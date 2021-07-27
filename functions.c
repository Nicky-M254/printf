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
 * op_int - prints/converts characters, %d and %i
 * @ptr: the arugment to work with
 *
 * Return: The number of characters printed
 */
/*int op_int(char *ptr)
{
	int length;

	int i = 0;

	if (ptr != NULL)
	{
		i = 0;
		length = strlen(ptr);
		while (i <= length)
		{
			_putchar(ptr[i] % 10 + '0');
			i++;
		}
	}
	return (i);
}*/
