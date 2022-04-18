#include "main.h"
#include <stdarg.h>
/**
 *_printf - prints to stdout
 *@format: string
 *Return: returns the number count of the string character
 */

int _printf(const char *format, ...)
{
va_list arg_list;
unsigned int = 0;
if (format == NULL)
{
	exit (1);
}
convert_t f_list[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_integer},
	{"i", print_integer},
	{"u", unsigned_int},
	{"x", print_hex},
	{"X", print_heX},
	{"%", print_percent},
	{NULL, NULL}
}

va_start(arg_list, format);
i = int parser(format, f_list, arg_list);
return (i);
}
