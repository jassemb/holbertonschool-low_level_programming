#include "holberton.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: The number to check
 *
 * Return: 1 (Success)
 */
int _islower(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
		else if(n == 0)
		{
			return (0);
			_putchar('0');
		}
	else
	{
		 return (-1);
		  _putchar('-');
	}
}
