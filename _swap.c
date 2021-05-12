#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: pointer to pinter to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (len_stack < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	if (len_stack == 2)
	{
		*stack = (*stack)->next;
		return;
	}
	tmp = (*stack)->next;
	tmp->prev = (*stack)->prev;
	(*stack)->prev->next = tmp;
	(*stack)->prev = tmp;
	(*stack)->next = tmp->next;
	tmp->next->prev = *stack;
	tmp->next = *stack;
	*stack = tmp;
}
