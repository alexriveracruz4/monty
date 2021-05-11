#include "monty.h"

/**
 * main - main function of monty
 * @argc: number of arguments
 * @argv: array of aguments
 *
 * Return: EXIT_SUCCESS or  EXIT_FAILURE
 */

int main(int argc, char**argv)
{

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: monty file\n", 18);
		exit(EXIT_FAILURE);
	}


	if (fopen(argv[1], "r") == NULL)
	{

		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	exit(EXIT_SUCCESS);
}
