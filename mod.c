#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mod_op - Computes the rest of the division of the second top element
 * by the top element.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void mod_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp->n %= (*stack)->n; /* Compute the rest of the division */
	pop(stack, line_number); /* Remove the top element */
}

