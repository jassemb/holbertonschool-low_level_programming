#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*newop)(int, int);
	int (*checker)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	checker = get_op_func(argv[2]);
	if (checker == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && atoi(argv[3]) == 0)
	    || (argv[2][0] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	newop = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%i\n", newop(num1, num2));
	return (0);
}
