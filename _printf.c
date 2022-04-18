#include "main.h"
#include "f_specifiers.c"
#include "str-char.c"
#include "parser.c"


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
        {NULL, NULL}
	};


	va_list arg_list;

	if (format == NULL)
		exit(1);
	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	return (printed_chars);
}
