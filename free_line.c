#include "monty.h"

/**
 * free_line - free line read by getline
 * @s: status
 * @arg: line
 *
 * Return: void
 */
void free_line(int s, void *arg)
{
	char **line = arg;

	(void) s;
	if (*line != NULL)
		free(*line);
}
