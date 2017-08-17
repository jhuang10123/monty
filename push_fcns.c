#include "monty.h"
/**
 * push - pushes value/new node to stack
 * @token: value in node
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void push(char *token, stack_t **stack, unsigned int line_number\
	)
{
        stack_t *new;
        int new_val;

/* check if value is int*/

        if (check_digit(token, line_number) == 0)
        {
                new_val = atoi(token);

                new = malloc(sizeof(stack_t));
                if (new == NULL)
                {
			printf("Error: malloc failed\n");
			free_all(stack);
			exit(EXIT_FAILURE);
                }

		if (*stack != NULL)
			(*stack)->prev = new;

                new->n = new_val;
                new->prev = NULL;
                new->next = *stack;

                *stack = new;
	}
}
