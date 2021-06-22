#include "holberton.h"
/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c < 'z' && c > 'a')
		return (1);
		else 
			return (0);
}
