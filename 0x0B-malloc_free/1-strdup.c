#include "holberton.h"
#include <stdlib.h>
/*
 * _strdup() - function returns a pointer to a new string
 *		which is a duplicate of the string str.
 *
 *  @str: The string to be copied.
 *   Return: If str == NULL or insufficient memory is available - NULL.
 *		Otherwise - a pointer to the duplicated string.
 *
 */
char *_strdup(char *str)
{
	char *sc;
	int i ,len = 0;

	if (str == NULL)
		return (NULL);

	for(i =0; str[i]; i++)
		len++;
	
	sc = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);
	
	for(i =0; str[i]; i++)
		sc[i] = str[i];
	
	sc[len] ='\0';

	return (sc);


}
