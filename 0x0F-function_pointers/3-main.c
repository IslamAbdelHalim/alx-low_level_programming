#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: The count of argument
 *
 * @argv: The value
 *
 * Return: 0 Always sucess
*/

int main(int argc, char **argv)
{
	/*defination The function pointer*/
	int (*op_function)(int, int);
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*Pointer to The function get op function*/
	op_function = get_op_func(argv[2]);

	if (!op_function)
	{
		printf("Error\n"), exit(99);
	}

	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n"), exit(100);
	}
	printf("%d\n", op_function(num1, num2));
	return (0);
}
