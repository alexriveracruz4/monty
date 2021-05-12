#include "monty.h"

/**
 * close_file - close file
 * @s: status
 * @arg: pointer to
 *
 * Return: void
 */
void close_file(int s, void *arg)
{
	FILE *fs;

	(void)s;

	fs = (FILE *) arg;
	fclose(fs);
}
