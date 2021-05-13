#include "monty.h"

int len_stack;

/**
 * main - main function of monty
 * @argc: number of arguments
 * @argv: array of aguments
 *
 * Return: EXIT_SUCCESS or  EXIT_FAILURE
 */

int main(int argc, char **argv)
{
	FILE *f = NULL;
	char *line = NULL, *opcode = NULL;
	size_t n = 0;
	unsigned int n_line = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: monty file\n", 18);
		exit(EXIT_FAILURE);
	}

	f = fopen(argv[1], "r");

	if (f == NULL)
	{

		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	on_exit(free_line, &line);
	on_exit(free_stack, &stack);
	on_exit(close_file, f);
	len_stack = 0;

	while (getline(&line, &n, f) != -1)
	{
		n_line++;
		opcode = strtok(line, " \n\t\r");
		if (opcode != NULL && opcode[0] != '#')
			app_opcode(opcode, &stack, n_line);
	}

	exit(EXIT_SUCCESS);
}
