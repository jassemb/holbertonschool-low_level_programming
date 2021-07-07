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
		 _putchar(*s);
		_puts_recursion(s + 1);
		
	}
	else
	{
		_putchar('\n');
	}
}
