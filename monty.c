#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;

	/*stack_t *stack = NULL;*/

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	/* Read and process the file line by line */
	while (fgets(line, len, file) != NULL)
	{
		/* Process each line here using line and line_number */
		/* For example: */
		printf("Line %u: %s", line_number, line);

		/* Increment line_number for the next iteration */
		line_number++;
	}

	/* Clean up */
	free(line);
	fclose(file);

	return (EXIT_SUCCESS);
}

