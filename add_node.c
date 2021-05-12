#include "monty.h"

/**
 * add_node - add a node in the circular linked list
 * @stack: pointer to pointer to the list
 * @n: value of teh node
 *
 * Return: pointer to new node or NULL
 */
stack_t *add_node(stack_t **stack, int n)
{
	stack_t *new;
	if (stack == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*stack == NULL)
	{
		new->prev = new;
		new->next = new;
	}
	else
	{
		(*stack)->prev->next = new;
		new->prev = (*stack)->prev;
		(*stack)->prev = new;
		new->next = *stack;
	}
	*stack = new;
	return (new);
}
