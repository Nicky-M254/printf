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
