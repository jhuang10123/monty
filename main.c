#include "monty.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	size_t n;
	unsigned int line_count = 1;
	char **tokens = NULL;
	stack_t *stack;
	info.buffer = NULL;

/* check number of arguments */
	if (argc != 2)
	{
/* error handle */
	}
/* fopen file, check if success*/
	info.file = fopen(argv[1], "r");
	if (file == NULL)
	{
/* handle error */
	}

	while (getline(&info.buffer, &n, info.file) != -1)
	{
		line_count += 1;
		tokens = strtok(buffer, "\n \t");

		while (tokens != NULL)
		{
			if (strcmp(tokens, "push") == 0)
				push(tokens);
			else
				check_opcode(tokens, );

			tokens = strtok(NULL, "\n \t");
		}
	}

	fclose(file);
/* free all */
}
