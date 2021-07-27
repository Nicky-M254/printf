#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - replicate of the C standard 'printf' function.
 * @format: string to be printed
 * @...: ellipsis (unknown arguments [varidiac].
 *
 * Return: Count of printed versatile_ptrs.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	char character;
	int count;

	count = 0;

	va_start(ap, format);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == 'c')
				{
					count += _putchar(va_arg(ap, int));
					i++;
				}
				else
				{
					character = format[i + 1];
					count += _getfunc(character)(va_arg(ap, char *));
					i++;
				}
			}
			else
			{
				_putchar(format[i]);
			}
		}
		count += i;
	}

	va_end(ap);

	return (count);
}
