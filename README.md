# _printf
## The c standard printf function clone
# _printf

## NAME
	_printf - formats and prints data, with the ability to call certain
	conversion characters

## SYNOPSIS
	_printf FORMAT [ARGUMENT]...

## DESCRIPTION
	Prints ARGUMENT(s) according to FORMAT
	FORMAT controls the output of the function interpreting the following
	special sequences as:

- %c: Character
- %s: String
- %d: Decimal integer
- %i: Integer
- %u: Unsigned integer
- %b: Binary integer
- %h: Hexidecimal integer with lower case a-f digits
- %H: Hexidecimal integer with upper case A-F digits
- %o: Octal integer (unsigned)
- %p: Address in hexidecimal
- %%: Prints '%' normally
