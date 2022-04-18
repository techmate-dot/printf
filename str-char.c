#include "main.h"
#include <stdarg.h>

/**
 *print_char - Prints a char.
 *@arg_list: The list of arguments passed from printf.
 *Return: Always 1
 */

int print_char(va_list arg_list)
{
_write_char(va_arg(arg_list, int));
return (1);
}

/**
 *print_string -prints string
 *@arg_list: The list of arguments passed from printf.
 *Return: returns the number cont of characters.
 */

int print_string(va_list arg_list)
{
int i; /* character counter*/
char *str = va_arg(arg_list, char *);

for (i = 0; str[i] != '\0'; i++)
{
	_write_char(str[i]);
}
return (i);
}


/**
 *print_percent - prints string
 *@arg_list: The list of arguments passed from printf.
 *Return: returns the number cont of characters.
 */

int print_percent(__attribute__((unused))va_list list)
{
_write_char('%');
return (1);
}
