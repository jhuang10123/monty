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
 * sub - subtracts top element from the second top element of the stack.
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
		printf("L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_val = temp->next->n - temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}

/**
 * divi - divides second top element by the top element of the stack
ment of the stack.
* @stack: doubly linked list stack
* @line_number: line number of token in file
*/
void divi(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
        int new_val;

	temp = *stack;
        if (temp == NULL || temp->next == NULL)
        {
                printf("L%u: can't div, stack too shor\
t\n", line_number);
                exit(EXIT_FAILURE);
        }

	if (temp->n == 0)
	{
                printf("L%u: division by zero\n", line_number);
                exit(EXIT_FAILURE);
	}

	new_val = temp->next->n / temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}

/**
* mod - computes the rest of division of 2nd top element by the top element.
* @stack: doubly linked list stack
* @line_number: line number of token in file
*/
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int new_val;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%u: can't mod, stack too shor\
t\n", line_number);
                exit(EXIT_FAILURE);
        }

        if (temp->n == 0)
        {
                printf("L%u: division by zero\n", line_number);
                exit(EXIT_FAILURE);
        }

        new_val = temp->next->n % temp->n;
        temp->next->n = new_val;

        pop(stack, line_number);
}


/**
 * mul - multiplies the second top element with the top element of the stack.
* @stack: doubly linked list stack
* @line_number: line number of token in file
*/
void mul(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;
        int new_val;

        temp = *stack;
        if (temp == NULL || temp->next == NULL)
	{
                printf("L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
        }

        new_val = temp->next->n * temp->n;
        temp->next->n = new_val;

        pop(stack, line_number);
}
