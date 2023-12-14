#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sub - Subtracts the top element of the stack from the second top element.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;

	temp->n -= (*stack)->n; /* Subtract the top element from the second top element */
	pop(stack, line_number); /* Remove the top element */
}

