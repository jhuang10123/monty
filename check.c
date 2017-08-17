#include "monty.h"
/**
 * check_opcode - checks whether user input matches opcodes in struct
 * @token: token to check
 * @stack: doubly linked list stack
 * @line_number: line number of command in file
 */
void check_opcode(char *token, int line_number, stack_t **stack)
{
	unsigned int i;

	instruction_t opcode[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"nop", nop},
		{NULL, NULL}

	};

	i = 0;
	while (opcode[i].opcode != NULL)
	{
		if (strcmp(opcode[i].opcode, token) == 0)
		{
			opcode[i].f(stack, line_number);
			return;
		}
		i++;
	}

	printf("L%d: unknown instruction %s\n", line_number, token);
	return;

}
