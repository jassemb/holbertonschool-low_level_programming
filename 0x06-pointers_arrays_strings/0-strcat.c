#include "holberton.h"
/**
 * _strchr -  conact two char.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
char *_strcat(char *dest, char *src)
{
	int c, d;
	c = 0;
	
	while (dest[c])
	{
		c++;      
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[c] = src[i];
		c++;
	}
 
	dest[c] = '\0';
	return (dest);
}
