#include "holberton.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
