#include "monty.h"
#include <ctype.h>

/**
 * check_digit - check if the string contains only numbers
 * @str: string to check
 *
 * Return: 0 if success, else 1
 */
int check_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (isdigit(str[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * _push - push a integer in stack
 * @stack: pointer to pointer to the stack
 * @line_number: bumber of the line executed
 *
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	int number;
	char *arg;

	arg = strtok(NULL, " \n\t\r");
	if (arg == NULL || check_digit(arg))
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	number = atoi(arg);
	if (!add_node(stack, number))
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	flag.len_stack++;
}
