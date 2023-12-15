#include "monty.h"

/**
 * execute - Interpret and execute Monty bytecode instructions
 * @content: Bytecode instructions
 * @stack: Double pointer to the beginning of the stack
 * @counter: Line number of the instruction being executed
 * @file: File stream for error handling
 */
void execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	char *op;
	instruction_t opst[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"pop", f_pop},
		/* Add more instructions as needed */
		{NULL, NULL}};

	op = strtok(content, " \n\t");
	if (op == NULL || op[0] == '#')
		return;

	bus.arg = strtok(NULL, " \n\t");

	for (unsigned int i = 0; opst[i].opcode; i++)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return;
		}
	}

	fprintf(stderr, "L%u: unknown instruction %s\n", counter, op);
	free_stack(*stack);
	fclose(file);
	exit(EXIT_FAILURE);
}

