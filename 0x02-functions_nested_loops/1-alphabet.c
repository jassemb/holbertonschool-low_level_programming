#include "holberton.h"
/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: 1 (Success)
 */
int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	return (1);
}
