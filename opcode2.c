#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int added_val;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	added_val = temp->n + temp->next->n;
	temp->next->n = added_val;
	*stack = (*stack)->next;
free(temp);

}

/**
 * add - adds the top two elements of the stack
 * @stack: doubly linked list stack
 * @line_number: line number of token in file
 */
void sub(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;
	int new_val;

        temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_val = temp->next->n - temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}
