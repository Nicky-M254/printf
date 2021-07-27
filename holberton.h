#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _putchar(char c);

/**
 * struct specifiers - Struct specifiers
 * @specifier: The conversion specifier
 * @f: The function pointer
 */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;

int _write(char c);
int _printf(const char *format, ...);
int _print_a_char(va_list args);
int _print_a_string(va_list args);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_a_integer(va_list args);
void _recursion_integer(int a);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);
int _validate_char(char _type);

/**
 * struct op - structure of data for _printf
 * @op: pointer
 * @f: function pointer
 * @s: function pointed to
 */
typedef struct op
{
	char *op;
	int (*f)(char *s);
} opt_t;

int (*_getfunc(char str))(char *str);
int op_int(char *s);
int op_str(char *s);

#endif
