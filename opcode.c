#include "monty.h"
/**
 * pall -
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;

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
 * pint - 
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L<%d>: can't pint, stack empty\n", line_number);
                free_stack(stack);
                free(info.buffer);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

/**
 * pop - 
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL)
	{
		printf("L<%d>: can't pop, stack empty\n", line_number);
		free_stack(stack);
		free(info.buffer);
		exit(EXIT_FAILURE);
	}

	temp = *stack;

	*stack = (*stack)->next;

	free(temp);

	if (*stack != NULL)
		(*stack)->prev = NULL;

	return;
}


/**
 * nop - 
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
