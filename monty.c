#include "monty.h"
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	FILE *file = fopen(argv[1], "r");
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;

	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}



	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	/* Initialize stack */


	/* Read and process the file line by line */
	
	while (fgets(line, len, file) != NULL)
	{
		/* Process the line here */
		parse_opcode_and_execute(&stack, line, line_number);
	}

	/* Clean up */
	free(line);
	fclose(file);

	return (EXIT_SUCCESS);
}


