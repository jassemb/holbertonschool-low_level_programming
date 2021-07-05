#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: character array to fill
 * @b: constant byte to fill with
 * @n: how many bytes to fill
 * Return: the pointer to the char array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (int i=0; i<n; i++)
		dest[i] = src[i];
	return (dest);
}
