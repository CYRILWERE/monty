#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pchar_op - Prints the char at the top of the stack, followed by a new line.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void pchar_op(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	putchar((*stack)->n);
	putchar('\n');
}

