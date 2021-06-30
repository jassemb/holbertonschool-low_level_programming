#include "holberton.h"
/**
 * _strncpy - concatenates string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 * Return: destination string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;

	while (src[i++])
		srclen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srclen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
