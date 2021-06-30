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
	
	while (dest[c] != '\0')
	{
		c++;      
	}
	d = 0;
	while (q[d] != '\0')
	{
		src[c] = dest[d];
		d++;
		c++;    
	}
 
	dest[c] = '\0';
	return (dest);
}
