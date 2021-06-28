#include "holberton.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 * @c: the compter of the length
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
