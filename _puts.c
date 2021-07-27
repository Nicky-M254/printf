#include "holberton.h"

/**
 * _puts - Function to output string to stdout
 *
 * @str: A pointer to character parameter
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
