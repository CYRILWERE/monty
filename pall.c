#include "monty.h"
#include <stdio.h>

/* Implementation of pall opcode */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number; /* Unused parameter */

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}


