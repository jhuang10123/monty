#include "monty.h"
/**
 * pall - prints all values on the stack, from the top of the stack
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
 * pint - prints the value at the top of the stack, followed by a new line
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L<%u>: can't pint, stack empty\n", line_number);
		free_stack(stack);
		free(info.buffer);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

/**
 * pop - removes the top element of the stack
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL)
	{
		printf("L<%u>: can't pop an empty stack\n", line_number);
		free_stack(stack);
		free(info.buffer);
		exit(EXIT_FAILURE);
	}

	temp = *stack;

	*stack = (*stack)->next;

	free(temp);

	if (*stack != NULL)
		(*stack)->prev = NULL;
}


/**
 * nop - does nothing
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * swap - swaps the top two elements of the stack
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int store_val;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	store_val = temp->n;
	temp->n = temp->next->n;
	temp->next->n = store_val;
}
