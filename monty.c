#include "monty.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	/* Initialize stack */
	stack_t *stack = NULL;

	/* Read and process the file line by line */
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while ((read = getline(&line, &len, file)) != -1)
	{
		/* Process the line here */
		parse_opcode_and_execute(&stack, line, line_number);
	}

	/* Clean up */
	free(line);
	fclose(file);

	return (EXIT_SUCCESS);
}


