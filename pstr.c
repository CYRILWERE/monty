#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pstr_op - Prints the string starting at the top of the stack, followed by a new line.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void pstr_op(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number; /* Unused parameter */

	while (current != NULL && current->n != 0 && (current->n >= 0 && current->n <= 127))
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}

