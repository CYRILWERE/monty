#include "monty.h"

/**
 * stack_op - Sets the format of the data to a stack (LIFO).
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void stack_op(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	/* Do nothing; already in stack mode */
}

/**
 * queue_op - Sets the format of the data to a queue (FIFO).
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in Monty byte code file.
 */
void queue_op(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *temp;

	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		current = *stack;

		while (current->next != NULL)
			current = current->next;

		temp = *stack;
		temp->next->prev = NULL;
		*stack = temp->next;
		temp->next = NULL;
		temp->prev = current;
		current->next = temp;
	}
}


