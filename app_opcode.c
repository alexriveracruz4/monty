#include "monty.h"

/**
 * app_opcode - check and apply if opcode exist
 * @opc: opdocode to check
 * @stack: pointer to pointer to stack
 * @n_line: number of line executed
 *
 * Return: void:
 */
void app_opcode(char *opc, stack_t **stack, unsigned int n_line)
{
	int i;

	instruction_t list_opcodes[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{NULL, NULL}
	};


	for (i = 0; list_opcodes[i].opcode != NULL; i++)
	{
		if (strcmp(list_opcodes[i].opcode, opc) == 0)
		{
			list_opcodes[i].f(stack, n_line);
			return;
		}
	}

	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", n_line, opc);
	exit(EXIT_FAILURE);
}
