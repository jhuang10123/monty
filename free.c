#include "monty.h"
/**
 * free_stack - frees stack
 * @stack: pointer to stack/doubly linked list
 */
void free_stack(stack_t **stack)
{
	stack_t *temp;

        while (*stack != NULL)
        {
                temp = *stack;
                *stack = (*stack)->prev;
                free(temp);
        }
}

/**
 * free_all - frees stack, buffer, and closes file
 * @stack: pointer to stack/doubly linked list
 */
void free_all(stack_t **stack)
{
	free_stack(stack);
	free(info.buffer);
	fclose(info.file);
}
