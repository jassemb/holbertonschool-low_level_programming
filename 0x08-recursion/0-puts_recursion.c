#include "holberton.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: the string that should be printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
