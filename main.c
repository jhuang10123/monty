#include "monty.h"
info_t info;

/**
 * main - main
 * @argc: agrument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	size_t n;
	unsigned int line_number = 0;
	char *token = NULL;
	stack_t *stack = NULL;

	info.buffer = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	info.file = fopen(argv[1], "r");
	if (info.file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&info.buffer, &n, info.file) != -1)
	{
		line_number += 1;
		token = strtok(info.buffer, "\n \t");
		if (token[0] == '#')
			continue;

		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n \t");
			push(token, &stack, line_number);
		}
		else
			check_opcode(token, line_number, &stack);
		token = strtok(NULL, "\n \t");
	}

	free_all(&stack);
	return (0);
}
