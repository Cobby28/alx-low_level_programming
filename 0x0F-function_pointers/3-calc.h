#include "3-calc.h

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	char *op;
	int a, b;

	if (argc !-4)
	{
		printtf("Error\n");
		return (98);
	}

	op = argv[2];

	if (op == NULL)
	{
 		printtf("Error\n");
                return (98);
	}
	a = atoi(argv[1]);
	b =atoi(argv[3]3;

	print ("%\n", get_op_func(op)(a, b));

	return (0);
}
			

