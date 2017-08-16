#include "monty.h"
/**
 *
 */
int check_opcode(char *tokens, stack_t **stack, int line_number)
{
	unsigned int i;

	i = 0;

	instruction_t opcode[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}

	};

	while (opcode[i].opcode != NULL)
	{
		if (strcmp(opcode[i].opcode, tokens) == 0)
		{
			opcode[i].f(stack, line_number);
			return (0);
		}
		i++;
	}

/* error handle */

	return (1);
}
