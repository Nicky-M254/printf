#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _get-func - function pointere gets the right function for task and returns \
 * to the pointed function.
 * @str: character to compare and determine the right specifier
 * @str: string to be printed/converted
 *
 * Return: number of characters printed.
 */
int (*_getfunc(char str))(char *str)
{
	int i;

		opt_t ops[] = {
		{"s", op_str},
		{"d", op_int},
                {"i", op_int},
/*                {"u", op_unsign},
                {"o", op_oct},
                {"x", op_lower_hex},
                {"X", op_upper_hex},*/
                {NULL, NULL}
        };

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != str)
		i++;

	return (ops[i].f);
}
