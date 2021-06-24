#include "holberton.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9 except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar ((i% 10) + '0');
	}
	_putchar ('\n');
}
