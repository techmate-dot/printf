#include "main.h"

/**
 *_printf - prints to stdout
 *@format: string
 *Return: returns the number count of the string character
 */

int _printf(const char *format, ...)
{
va_list arg_list;
int char_count = 0;

conver_t f_list[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{"d", print_integer},
	{"i", print_integer},
	{"b", print_binary},
	{"R", rot13},
	{"u", unsigned_integer},
	{"o", print_octal},
	{"x", print_hex},
	{"X", print_heX},
	{"r", print_reversed},
	{NULL, NULL}
};

if (format == NULL)
	exit(56);
va_start(arg_list, format);
char_count = parser(format, f_list, arg_list);
return (char_count);
}
