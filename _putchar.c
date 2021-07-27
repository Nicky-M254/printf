#include <unistd.h>

/**
 * _putchar - prints to the stdout
 * @c: character to be printed
 *
 * Return: Int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
