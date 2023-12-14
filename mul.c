#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mul_op - Multiplies the second top element of the stack by the top element.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void mul_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;

	temp->n *= (*stack)->n; /* Multiply the second top element by the top element */
	pop(stack, line_number); /* Remove the top element */
}

