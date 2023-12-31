#include "monty.h"
#include <stdio.h>

/**
 * pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

