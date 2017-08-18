#include "monty.h"
/**
 * check_digit - converts string to int
 * @value: string to convert
 * @line_number: line number
 * Return: converted value or -1
 */
int check_digit(char *value, unsigned int line_number)
{
	unsigned int i;

	i = 0;
	while (value[i] != '\0')
	{
		if (value[i] == '-' && i == 0)
			i++;

		if (isdigit(value[i]) == 0)
		{
			printf("L%u: usage: push integer\n", line_number);
			return (1);
		}
		i++;
	}

	return (0);
}
