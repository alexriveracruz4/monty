#include "monty.h"

/**
 * free_stack - free the stack
 * @s: status
 * @arg: stack
 *
 * Return: void
 */
void free_stack(int s, void *arg)
{
	stack_t **stack;
	stack_t *tmp;

	(void) s;
	stack = (stack_t **)arg;
	if (*stack)
	{
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	}
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	flag.len_stack = 0;
}
