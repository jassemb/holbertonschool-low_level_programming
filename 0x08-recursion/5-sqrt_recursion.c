#include "holberton.h"
/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	int i = 1, result = 1;

	if (n == 0 || n == 1)
		return (n);

	while (result <= n)
	{
		i++;
		result = i * i;
	}
	return (i - 1);

}
