#include "main.h"
#include "f_specifiers.c"
#include "str-char.c"
#include "parser.c"
#include "number_bases.c"


/**
 *_printf - prints to stdout
 *@format: string
 *Return: returns the number count of the string character
 */

int _printf(const char *format, ...)
{
	int printed_chars;

	conver_t f_list[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
	{"d", print_integer},
	{"i", print_integer},
	{"b", print_binary},
	{"u", unsigned_integer},
	{"o", print_octal},
	{"x", print_hex},
	{"X", print_heX},
        {NULL, NULL}
	};


	va_list arg_list;

	if (format == NULL)
		exit(1);
	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	return (printed_chars);
}
