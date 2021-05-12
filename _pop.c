#include "monty.h"

/**
 * _pop - removes the top element of the stack.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if ((*stack) == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	if ((*stack)->next == (*stack))
	{
		*stack = NULL;
		free(tmp);
		return;
	}

	*stack = tmp->next;
	(tmp->prev)->next = *stack;
	(*stack)->prev = tmp->prev;
	free(tmp);
	len_stack--;
}
