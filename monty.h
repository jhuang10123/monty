#ifndef MONTY
#define MONTY
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct info_s - keeps track of mode, length of stack, value to add
 * @mode: 1 if stack, 0 if queue
 * @stack_len: length of stack;
 * @value: value if opcode found
 */
typedef struct info_s
{
	FILE file;
	char *buffer;
	int mode;
} info_t;

extern info_t info;



/* CHECK */
int check_opcode(char *tokens, stack_t **stack, int line_number);


/* helpers */
int check_digit(char *value);

/* OPCODES */
void push(char **tokens, stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
int pop(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);



#endif /*MONTY*/
