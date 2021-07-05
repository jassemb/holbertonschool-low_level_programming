#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: character array to check
 * @accept: character array to check for
 * Return: the number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	 for (i = 0; i < strlen(accept); i++)
	 {
		 if (count == strlen(s))
			 break;
		 if (t[i] == s[count])
			 count++;
	 }
	return count;
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
