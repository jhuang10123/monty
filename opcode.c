#include "monty.h"
/**
 *
 */
void push(char **tokens, stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *value;
	int new_val;

/* error handle if head is null */

/* check if value is int*/
	value = strtok(NULL, "\n \t");

	if (check_digit(value) == 0)
	{
		new_val = atoi(value);

		new = malloc(sizeof(stack_t));
		if (new == NULL)
		{
/* error handle */
		}


		new->n = new_val;
		new->prev = NULL;
		new->next = *stack;

		if (*stack != NULL)
			(*stack)->prev = new;

		*stack = new;
	}
}

/**
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;

	if (*stack == NULL || stack == NULL)
		return;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 *
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L<%d>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

/**
 *
 */
int pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int value;

	if (stack == NULL || *stack == NULL)
	{
		printf("L<%d>: can't pop, stack empty\n", line_nu\
		       mber);
		exit(EXIT_FAILURE);
	}

	temp = *stack;

	*stack = (*stack->next);

	value = temp->n;

	free(temp);

	return (value);
}



void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
