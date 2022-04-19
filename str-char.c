#include "main.h"

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
if (str == NULL)
{
	str = "(null)";
}
for (i = 0; str[i] != '\0'; i++)
{
	_write_char(str[i]);
}
return (i);
}


/**
 *print_reversed -prints revers string
 *@arg: The list of arguments passed from printf.
 *Return: returns the number count of characters.
 */

int print_reversed(va_list arg)
{
int i, count = 0;
char *str = va_arg(arg, char *);

if (str == NULL)
	str = "(null)";
exit(23);
for (i = 0; str[i] != '\0'; i++)
	count++;
for (; i >= 0; i--)
	_write_char(str[i]);
return (count);
}
